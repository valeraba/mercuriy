#define COUNT_SIGNALS 25
#define COUNT_STORE 14
#include "Types.h"
#include "MgtClient.h"
#include "boiler.h"
#include "display.h"
#include <EEPROM.h>
#include "pins.h"

extern signed long device_id;
extern char* authorization_key;

//-------Select your platform----------------
#include "Ethernet_Shield_W5100.h"
#include <SPI.h>
#include <Ethernet.h>

//-------Добавил свои библиотки-----------
#include "Adafruit_MAX31855.h"
#include <OneWire.h>

Adafruit_MAX31855 thermocouple(pinThermoCLK, pinThermoCS, pinThermoDO);

#define oxygenPin A0


extern struct PortableSocket mySocket;

void debugLog(const __FlashStringHelper* aFormat, ...) {
  va_list args;
  va_start(args, aFormat);
  char buf[100];
  vsnprintf_P(buf, sizeof(buf), (const char*)aFormat, args);
  Serial.print(buf);
  va_end(args);
}

__uint32 crc32(__uint8* aBuf, __uint32 aLen, __uint32 aCrc);

static struct Signal* s1; // nasosKranKotel
static struct Signal* s2; // nasosPotrebiteli
static struct Signal* s3; // dymosos
static struct Signal* s4; // kranTA
static struct Signal* s5; // zaslonkaDymohod
static struct Signal* s6; // 1_Dymovaya_Truba
static struct Signal* s7; // 2_Kotel_Vyhod
static struct Signal* s8; // 3_Kotel_Obratka
static struct Signal* s9; // 4_Verh_TA
static struct Signal* s10; // 5_Niz_TA
static struct Signal* s11; // oxygen
static struct Signal* s12; // servo1
static struct Signal* s13; // servo2
static struct Signal* s14; // servo3
static struct Signal* s15; // kranTaJob_on
static struct Signal* s16; // kranTaJob_off
static struct Signal* s17; // kranTaSleep_on
static struct Signal* s18; // kranTaSleep_off
static struct Signal* s19; // nasosPotrebitel_on
static struct Signal* s20; // nasosPotrebitel_off
static struct Signal* s21; // dymosos_on
static struct Signal* s22; // dymosos_off
static struct Signal* s23; // systemCRIHot_max
static struct Signal* s24; // systemCRIHot_min
static struct Signal* s25; // ignition

static struct MgtClient client;

void coefficientsSave() {
  byte* data = (byte*)(&coefficients);
  int len = sizeof(Coefficients);
  for (int i = 0; i < len; i++)
    EEPROM.update(i, data[i]);

  __uint32 crc = crc32((__uint8*)(&coefficients), len, 0xffffffff);
  data = (byte*)(&crc32);
  for (int i = len; i < 4; i++)
    EEPROM.update(i + len, data[i]);
}

void coefficientsInit() {
  byte* data = (byte*)(&coefficients);
  int len = sizeof(Coefficients);
  for (int i = 0; i < len; i++)
    data[i] = EEPROM.read(i);

  __uint32 crc;
  data = (byte*)(&crc);
  for (int i = len; i < 4; i++)
    data[i] = EEPROM.read(i + len);

  if ( crc != crc32((__uint8*)(&coefficients), len, 0xffffffff)) {
    coefficients.kranTaJob_on = 85;
    coefficients.kranTaJob_off = 84;
    coefficients.kranTaSleep_on = 28;
    coefficients.kranTaSleep_off = 27;
    coefficients.nasosPotrebitel_on = 65;
    coefficients.nasosPotrebitel_off = 60;
    coefficients.dymosos_on = 114;
    coefficients.dymosos_off = 135;
    coefficients.systemCRIHot_max = 96;
    coefficients.systemCRIHot_min = 95;
  
    coefficientsSave();    
  }

  // синхронизируем
  Signal* s = s15;
  byte* coefficient = (byte*)(&coefficients);
  for (byte i = 0; i < 10; i++) {
    s->m_value.u.m_uint8 = *coefficient;
    s++;
    coefficient++; 
  }

}

void coefficientsWrite(Signal* aSignal, byte aValue) {
  byte min;
  byte max;
  Signal* s;
  char delta; 
  if (aSignal == s15) { min = 70; max = 90; s = s16; delta = -1; }
  else if (aSignal == s16) { min = 69; max = 89; s = s15; delta = 1; }
  else if (aSignal == s17) { min = 23; max = 35; s = s18; delta = -1; }
  else if (aSignal == s18) { min = 22; max = 34; s = s17; delta = 1; }
  else if (aSignal == s19) { min = 55; max = 75; s = s20; delta = -5; }
  else if (aSignal == s20) { min = 50; max = 70; s = s19; delta = 5; }
  else if (aSignal == s21) { min = 100; max = 140; s = s22; delta = 20; }
  else if (aSignal == s22) { min = 130; max = 170; s = s21; delta = -20; }
  else if (aSignal == s23) { min = 90; max = 97; s = s24; delta = -1; }
  else if (aSignal == s24) { min = 89; max = 96; s = s23; delta = 1; }

  if ((aValue < min) || (aValue > max)) {
    mgt_writeAns(&client, aSignal, erWriteFailed);
    return;   
  }

  TimeStamp t = getUTCTime();

  signal_update_int(aSignal, aValue, t);
  mgt_writeAns(&client, aSignal, erOk);


  if (delta > 0) { // если парный коэффициент должен быть больше
    if (s->m_value.u.m_uint8 < (aSignal->m_value.u.m_uint8 + delta)) {
      s->m_value.u.m_uint8 = aSignal->m_value.u.m_uint8 + delta;
      signal_updateTime(s, t);
      mgt_send(&client, s);
    }
  }
  else { // если парный коэффициент должен быть меньше
    if (s->m_value.u.m_uint8 > (aSignal->m_value.u.m_uint8 + delta)) {
      s->m_value.u.m_uint8 = aSignal->m_value.u.m_uint8 + delta;
      signal_updateTime(s, t);
      mgt_send(&client, s);
    }
  }
    
  // синхронизируем
  s = s15;
  byte* coefficient = (byte*)(&coefficients);
  for (byte i = 0; i < 10; i++) {
    *coefficient = s->m_value.u.m_uint8;
    s++;
    coefficient++; 
  }

  coefficientsSave(); 
}


// write with confirmation for "dymosos"
static void write_s3(bool aValue) {
  if (setDymosos(aValue)) {
    signal_update_int(s3, aValue, getUTCTime());
    mgt_writeAns(&client, s3, erOk);
  }
  else
    mgt_writeAns(&client, s3, erWriteFailed);

}

// asynchronous writes without confirmation for "servo1"
static void writeAsync_s12(__uint8 aValue) {
  setServo1(aValue);
  signal_update_int(s12, getServo1(), getUTCTime());
  mgt_send(&client, s12);
  debugLog(F("write s12: %i\n"), aValue);
}

// asynchronous writes without confirmation for "servo2"
static void writeAsync_s13(__uint8 aValue) {
  setServo2(aValue);
  signal_update_int(s13, getServo2(), getUTCTime());
  mgt_send(&client, s13);
  debugLog(F("write s13: %i\n"), aValue);
}

// asynchronous writes without confirmation for "servo3"
static void writeAsync_s14(__uint8 aValue) {
  setServo3(aValue);
  signal_update_int(s14, getServo3(), getUTCTime());
  mgt_send(&client, s14);
  debugLog(F("write s14: %i\n"), aValue);
}

// write with confirmation for "kranTaJob_on"
static void write_s15(__uint8 aValue) {
  coefficientsWrite(s15, aValue);
}

// write with confirmation for "kranTaJob_off"
static void write_s16(__uint8 aValue) {
  coefficientsWrite(s16, aValue);
}

// write with confirmation for "kranTaSleep_on"
static void write_s17(__uint8 aValue) {
  coefficientsWrite(s17, aValue);
}

// write with confirmation for "kranTaSleep_off"
static void write_s18(__uint8 aValue) {
  coefficientsWrite(s18, aValue);
}

// write with confirmation for "nasosPotrebitel_on"
static void write_s19(__uint8 aValue) {
  coefficientsWrite(s19, aValue);
}

// write with confirmation for "nasosPotrebitel_off"
static void write_s20(__uint8 aValue) {
  coefficientsWrite(s20, aValue);
}

// write with confirmation for "dymosos_on"
static void write_s21(__uint8 aValue) {
  coefficientsWrite(s21, aValue);
}

// write with confirmation for "dymosos_off"
static void write_s22(__uint8 aValue) {
  coefficientsWrite(s22, aValue);
}

// write with confirmation for "systemCRIHot_max"
static void write_s23(__uint8 aValue) {
  coefficientsWrite(s23, aValue);
}

// write with confirmation for "systemCRIHot_min"
static void write_s24(__uint8 aValue) {
  coefficientsWrite(s24, aValue);
}

// write with confirmation for "ignition"
static void write_s25(bool aValue) {
  if (setIgnition(aValue)) {
    signal_update_int(s25, aValue, getUTCTime());
    mgt_writeAns(&client, s25, erOk);
  }
  else
    mgt_writeAns(&client, s25, erWriteFailed);
}

static void handler(enum OpCode aOpCode, struct Signal* aSignal, struct SignalValue* aWriteValue) {
  switch (aOpCode) {
  case opRead:
    signal_updateTime(aSignal, getUTCTime());
    mgt_readAns(&client, aSignal, erOk);
    break;
  case opWrite:
    if (aSignal == s3)
      write_s3(aWriteValue->u.m_bool);
    else if (aSignal == s15)
      write_s15(aWriteValue->u.m_uint8);
    else if (aSignal == s16)
      write_s16(aWriteValue->u.m_uint8);
    else if (aSignal == s17)
      write_s17(aWriteValue->u.m_uint8);
    else if (aSignal == s18)
      write_s18(aWriteValue->u.m_uint8);
    else if (aSignal == s19)
      write_s19(aWriteValue->u.m_uint8);
    else if (aSignal == s20)
      write_s20(aWriteValue->u.m_uint8);
    else if (aSignal == s21)
      write_s21(aWriteValue->u.m_uint8);
    else if (aSignal == s22)
      write_s22(aWriteValue->u.m_uint8);
    else if (aSignal == s23)
      write_s23(aWriteValue->u.m_uint8);
    else if (aSignal == s24)
      write_s24(aWriteValue->u.m_uint8);
    else if (aSignal == s25)
      write_s25(aWriteValue->u.m_bool);
    break;
  case opWriteAsync:
    if (aSignal == s12)
      writeAsync_s12(aWriteValue->u.m_uint8);
    else if (aSignal == s13)
      writeAsync_s13(aWriteValue->u.m_uint8);
    else if (aSignal == s14)
      writeAsync_s14(aWriteValue->u.m_uint8);
    break;
  }
}

void setup() {
  // TODO insert your setup code
  analogReference(INTERNAL2V56);
  boiler_init();
  display_init();
  //----------------
#ifdef ARDUINO
  Serial.begin(115200);
  while (!Serial);
  int availableMemory = 8192;
  byte *buf;
  while ((buf = (byte *) malloc(--availableMemory)) == NULL);
    free(buf);
  debugLog(F("Available RAM: %i\n"), availableMemory);
#endif
  struct DeviceConfig deviceConfig;
  deviceConfig.m_deviceId = device_id;
  deviceConfig.m_login = 0;
  deviceConfig.m_password = authorization_key;
  deviceConfig.m_hostname = "mgt24.ru";
  deviceConfig.m_debugLog = debugLog;
  deviceConfig.m_handler = handler;
  deviceConfig.m_storeFields = client.m_storeFields;
  deviceConfig.m_regSize = COUNT_STORE;

  if (!mgt_init(&client, &deviceConfig, &mySocket))
    while(1);

  s1 = mgt_createSignal(&client, "nasosKranKotel", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s2 = mgt_createSignal(&client, "nasosPotrebiteli", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s3 = mgt_createSignal(&client, "dymosos", tpBool, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s4 = mgt_createSignal(&client, "kranTA", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s5 = mgt_createSignal(&client, "zaslonkaDymohod", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s6 = mgt_createSignal(&client, "1_Dymovaya_Truba", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s7 = mgt_createSignal(&client, "2_Kotel_Vyhod", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s8 = mgt_createSignal(&client, "3_Kotel_Obratka", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s9 = mgt_createSignal(&client, "4_Verh_TA", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s10 = mgt_createSignal(&client, "5_Niz_TA", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s11 = mgt_createSignal(&client, "oxygen", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s12 = mgt_createSignal(&client, "servo1", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s13 = mgt_createSignal(&client, "servo2", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s14 = mgt_createSignal(&client, "servo3", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s15 = mgt_createSignal(&client, "kranTaJob_on", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s16 = mgt_createSignal(&client, "kranTaJob_off", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s17 = mgt_createSignal(&client, "kranTaSleep_on", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s18 = mgt_createSignal(&client, "kranTaSleep_off", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s19 = mgt_createSignal(&client, "nasosPotrebitel_on", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s20 = mgt_createSignal(&client, "nasosPotrebitel_off", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s21 = mgt_createSignal(&client, "dymosos_on", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s22 = mgt_createSignal(&client, "dymosos_off", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s23 = mgt_createSignal(&client, "systemCRIHot_max", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s24 = mgt_createSignal(&client, "systemCRIHot_min", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);
  s25 = mgt_createSignal(&client, "ignition", tpBool, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_WRITE, STORE_MODE_OFF, 0);

  coefficientsInit();

  mgt_start(&client);
}

struct Period {
  TimeStamp m_interval; // интервал в миллисекундах
  TimeStamp m_last; // установить в 0
};

static bool periodEvent(struct Period* aPeriod, TimeStamp aTime) {
  TimeStamp t = aTime / aPeriod->m_interval;
  if (aPeriod->m_last != t) {
    aPeriod->m_last = t;
    return true;
  }
  return false;
}

struct Period _1_min = { 1L * 60 * 1000, 0 };


void loop() {
  TimeStamp t = getUTCTime();
  bool isNewValue = run_ds(t); // пробуем считать значение датчиков
  double txa;
  
  if (isNewValue) { // если вычитаны новые значения
    //---- Начало моего рабочего кода (мой loop())--
    //temperaturePrint(0);
    //temperaturePrint(1);
    //temperaturePrint(2);
    //temperaturePrint(3);

    txa = thermocouple.readCelsius(); // довольно часто возращается NAN
    if (txa == txa) // если не NAN 
      txaTemp = txa + 0.5;  // 0.5 поправочное значение
    //Serial.print("Smoke temp:");
    //Serial.println(txaTemp);

    oxygen = (float)analogRead(oxygenPin) * (2.56 / 1024); // пока в вольтах
    
    boiler_work();
    display_draw();

    if (txa == txa) // если не NAN 
      signal_update_double(s6, txaTemp, t);  
    if (sensorOnline[Kotel_Vyhod])
      signal_update_double(s7, tempCels[Kotel_Vyhod], t);
    if (sensorOnline[Kotel_Obratka])
      signal_update_double(s8, tempCels[Kotel_Obratka], t);
    if (sensorOnline[Verh_TA])
      signal_update_double(s9, tempCels[Verh_TA], t);
    if (sensorOnline[Niz_TA])
      signal_update_double(s10, tempCels[Niz_TA], t);
    signal_update_double(s11, oxygen, t);  
  }

  if (mgt_run(&client) == stConnected) {
    
    if (isNewValue) { // если вычитаны новые значения
      if (txa == txa) // если не NAN      
        mgt_send(&client, s6);
      if (sensorOnline[Kotel_Vyhod])
        mgt_send(&client, s7);
      if (sensorOnline[Kotel_Obratka])
        mgt_send(&client, s8);
      if (sensorOnline[Verh_TA])
        mgt_send(&client, s9);
      if (sensorOnline[Niz_TA])
        mgt_send(&client, s10);
      mgt_send(&client, s11);    
    }

    
    bool relay[5] = {
      getNasosKranKotel(),
      getNasosPotrebiteli(),
      getDymosos(),
      getKranTA(),
      getZaslonkaDymohod()
    };

    byte servoPosition[3] = {
      getServo1(),
      getServo2(),
      getServo3()
    };
   
    Signal* sRelay = s1;
    Signal* sServo = s12;
    t = getUTCTime();

    if (periodEvent(&_1_min, t)) {
      for (byte i = 0; i < 5; i++) {
        sRelay->m_value.u.m_bool = relay[i];
        sRelay->m_value.m_time = t;
        mgt_send(&client, sRelay);
        sRelay++;
      }
      for (byte i = 0; i < 3; i++) {
        sServo->m_value.u.m_uint8 = servoPosition[i];
        sServo->m_value.m_time = t;
        mgt_send(&client, sServo);      
        sServo++;
      }
    }
    else {
      for (byte i = 0; i < 5; i++) {
        if (sRelay->m_value.u.m_bool != relay[i]) {
          sRelay->m_value.u.m_bool = relay[i];
          sRelay->m_value.m_time = t;
          mgt_send(&client, sRelay);
        }
        sRelay++;
      }
      for (byte i = 0; i < 3; i++) {
        if (sServo->m_value.u.m_uint8 != servoPosition[i]) {
          sServo->m_value.u.m_uint8 = servoPosition[i];
          sServo->m_value.m_time = t;
          mgt_send(&client, sServo);      
        }
        sServo++;
      }
    }

    bool ignition = getIgnition();
    if (ignition != s25->m_value.u.m_bool) {
      s25->m_value.u.m_bool = ignition;
      s25->m_value.m_time = t;
      mgt_send(&client, s25);
    }
    
  } 
}

// Не блокирующая функция чтения датчиков 
// если возращается false, то датчики не получили новые значения
// если возращается true, то датчики получили новые значения
bool run_ds(TimeStamp time)
{
  static TimeStamp convertTime = 0;
  static bool isFind[4] = { false, false, false, false };
  static byte rom[4][8];
  static OneWire ds[4] = { 
    OneWire(pinDS2), // Температура воды Котел подача  ДТ2
    OneWire(pinDS3), // Температура воды Котел обратка ДТ3
    OneWire(pinDS4), // Температура воды ТА Верхняя часть ДТ4
    OneWire(pinDS5) // Температура воды ТА Нижняя  часть ДТ5
  };

  if ((time - convertTime) < 800)
    return false; // ещё не готовы читать датчики

  // вычитаем значения датчиков
  for (byte i = 0; i < 4; i++) {
    if (!isFind[i]) // если датчик ещё не найден
      continue; // датчик ещё не найден

    ds[i].reset();
    ds[i].select(rom[i]);
    ds[i].write(0xBE);
    byte ram[9];
    for (byte k = 0; k < 9; k++) {
      ram[k] = ds[i].read();
    }
    if (OneWire::crc8(ram, 8) == ram[8]) { // если crc верно
      sensorOnline[i] = true; 
      int divider = 0;      
      if (rom[i][0] == 0x10) // если это 18S20
        divider = 2;
      else if (rom[i][0] == 0x28) // если это 18B20
        divider = 16;
      else
        Serial.print("Sensor is error type.");
      float temp = (__int16)((ram[1] << 8) | ram[0]);
      tempCels[i] = temp / divider;
    }
    else
      sensorOnline[i] = false;
  }

  // запустим процесс измерения
  for (int i = 0; i < 4; i++) {
    if (!isFind[i]) { // если датчик ещё не найден
      if (ds[i].search(rom[i])) {
        if (OneWire::crc8(rom[i], 7) != rom[i][7]) // если crc не сходится
          continue; // не найден
        isFind[i] = true; // датчик обнаружен
      }
    }
    ds[i].reset();
    ds[i].select(rom[i]);
    ds[i].write(0x44, 1);
  }
  convertTime = getUTCTime();
  return true;
}
 
//----------------------------- 
void temperaturePrint(int sensorNumber) {
  if (sensorOnline[sensorNumber]) {  
    Serial.print("Temp ");
    Serial.print(sensorNumber);
    Serial.print(" is ");
    Serial.print(tempCels[sensorNumber],2);
    Serial.print("C.\n");
    } 
  else { 
    Serial.print("Sensor ");
    Serial.print(sensorNumber);
    Serial.print(" not connected\n");
    delay (200); // 200
   }
  return;
 } 


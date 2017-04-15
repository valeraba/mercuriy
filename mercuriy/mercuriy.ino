/*Используются цифровые выходы
* Дисплей: 44, 46, 48
* Реле: 39, 41, 43, 45, 47
* Термопара: 24, 26, 28
* DS18b20: 25, 27, 29, 31
* Сервоприводы: 11, 12, 13
*/

#define COUNT_SIGNALS 14
#define COUNT_STORE 14
#include "Types.h"
#include "MgtClient.h"
#include "boiler.h"
#include "display.h"

extern signed long device_id;
extern char* authorization_key;

//-------Select your platform----------------
#include "Ethernet_Shield_W5100.h"
#include <SPI.h>
#include <Ethernet.h>

//-------Добавил свои библиотки-----------
#include "Adafruit_MAX31855.h"
#include <OneWire.h>
//--------назначил выходы Ардуино для взаимодействия с MAX31855-------
#define thermoDO  28
#define thermoCS  26
#define thermoCLK 24
Adafruit_MAX31855 thermocouple(thermoCLK, thermoCS, thermoDO);


extern struct PortableSocket mySocket;

void debugLog(const __FlashStringHelper* aFormat, ...) {
  va_list args;
  va_start(args, aFormat);
  char buf[100];
  vsnprintf_P(buf, sizeof(buf), (const char*)aFormat, args);
  Serial.print(buf);
  va_end(args);
}


static struct Signal* s1; // nasosKranKotel
static struct Signal* s2; // nasosPotrebiteli
static struct Signal* s3; // dymosos
static struct Signal* s4; // kranTA
static struct Signal* s5; // zaslonkaVozduha
static struct Signal* s6; // 1_Dymovaya_Truba
static struct Signal* s7; // 2_Kotel_Vyhod
static struct Signal* s8; // 3_Kotel_Obratka
static struct Signal* s9; // 4_Verh_TA
static struct Signal* s10; // 5_Niz_TA
static struct Signal* s11; // 6_Test_Sensor
static struct Signal* s12; // servo1
static struct Signal* s13; // servo2
static struct Signal* s14; // servo3

static struct MgtClient client;


// asynchronous writes without confirmation for "servo1"
static void writeAsync_s12(__uint8 aValue) {
  // TODO insert your code in the handler
  setServo1(aValue);
  signal_update_int(s12, getServo1(), getUTCTime());
  mgt_send(&client, s12);
  debugLog(F("write s12: %i\n"), aValue);
}

// asynchronous writes without confirmation for "servo2"
static void writeAsync_s13(__uint8 aValue) {
  // TODO insert your code in the handler
  setServo2(aValue);
  signal_update_int(s13, getServo2(), getUTCTime());
  mgt_send(&client, s13);
  debugLog(F("write s13: %i\n"), aValue);
}

// asynchronous writes without confirmation for "servo3"
static void writeAsync_s14(__uint8 aValue) {
  // TODO insert your code in the handler
  setServo3(aValue);
  signal_update_int(s14, getServo3(), getUTCTime());
  mgt_send(&client, s14);
  debugLog(F("write s14: %i\n"), aValue);
}

static void handler(enum OpCode aOpCode, struct Signal* aSignal, struct SignalValue* aWriteValue) {
  switch (aOpCode) {
  case opRead:
    signal_updateTime(aSignal, getUTCTime());
    mgt_readAns(&client, aSignal, erOk);
    break;
  case opWrite:
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
  s3 = mgt_createSignal(&client, "dymosos", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s4 = mgt_createSignal(&client, "kranTA", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s5 = mgt_createSignal(&client, "zaslonkaVozduha", tpBool, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s6 = mgt_createSignal(&client, "1_Dymovaya_Truba", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s7 = mgt_createSignal(&client, "2_Kotel_Vyhod", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s8 = mgt_createSignal(&client, "3_Kotel_Obratka", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s9 = mgt_createSignal(&client, "4_Verh_TA", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s10 = mgt_createSignal(&client, "5_Niz_TA", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s11 = mgt_createSignal(&client, "oxygen", tpFloat, SEC_LEV_READ | SIG_ACCESS_READ, STORE_MODE_AVERAGE | STORE_UNIT_SEC | 15, 0);
  s12 = mgt_createSignal(&client, "servo1", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s13 = mgt_createSignal(&client, "servo2", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);
  s14 = mgt_createSignal(&client, "servo3", tpUInt8, SEC_LEV_READ | SIG_ACCESS_READ | SIG_ACCESS_ASYNC_WRITE, STORE_MODE_CHANGE | STORE_UNIT_MIN | 1, 0);

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
  bool isNewValue = run_ds(getUTCTime()); // пробуем считать значение датчиков

  if (isNewValue) { // если вычитаны новые значения
    //---- Начало моего рабочего кода (мой loop())--
    temperaturePrint(0);
    temperaturePrint(1);
    temperaturePrint(2);
    temperaturePrint(3);

    txaTemp = thermocouple.readCelsius() + 0.5;  // 0.5 поправочное значение
    Serial.print("Smoke temp:");
    Serial.println(txaTemp);

    boiler_work();
    display_draw();
  }

  if (mgt_run(&client) == stConnected) {
    TimeStamp t = getUTCTime();
    if (isNewValue) { // если вычитаны новые значения     
      signal_update_double(s6, txaTemp, t);
      mgt_send(&client, s6);
      
      if (sensorOnline[Kotel_Vyhod]) {
        signal_update_double(s7, tempCels[Kotel_Vyhod], t);
        mgt_send(&client, s7);
      }
      if (sensorOnline[Kotel_Obratka]) {
        signal_update_double(s8, tempCels[Kotel_Obratka], t);
        mgt_send(&client, s8);
      }
      if (sensorOnline[Verh_TA]) {
        signal_update_double(s9, tempCels[Verh_TA], t);
        mgt_send(&client, s9);
      }
      if (sensorOnline[Niz_TA]) {
        signal_update_double(s10, tempCels[Niz_TA], t);
        mgt_send(&client, s10);
      }
    }

    
    bool relay[5] = {
      getNasosKranKotel(),
      getNasosPotrebiteli(),
      getDymosos(),
      getKranTA(),
      getZaslonkaVozduha()
    };

    Signal* s = s1;

    if (periodEvent(&_1_min, t)) {
      for (byte i = 0; i < 5; i++) {
        s->m_value.u.m_bool = relay[i];
        s->m_value.m_time = t;
        mgt_send(&client, s);
        s++;
      }
    }
    else {
      for (byte i = 0; i < 5; i++) {
        if (s->m_value.u.m_bool != relay[i]) {
          s->m_value.u.m_bool = relay[i];
          s->m_value.m_time = t;
          mgt_send(&client, s);
        }
        s++;
      }
    }

    byte servoPosition[3] = {
      getServo1(),
      getServo2(),
      getServo3()
    };

    s = s12;
    for (byte i = 0; i < 3; i++) {
      if (s->m_value.u.m_uint8 != servoPosition[i]) {
        s->m_value.u.m_uint8 = servoPosition[i];
        s->m_value.m_time = t;
        mgt_send(&client, s);      
      }
      s++;
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
    OneWire(31), // Температура воды Котел подача  ДТ2
    OneWire(29), // Температура воды Котел обратка ДТ3
    OneWire(27), // Температура воды ТА Верхняя часть ДТ4
    OneWire(25) // Температура воды ТА Нижняя  часть ДТ5
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
      float temp = (ram[1] << 8) + ram[0];
      tempCels[i] = temp / divider;
    }
    else
      sensorOnline[i] = false;
  }

  // запустим процесс измерения
  for (int i = 0; i < 4; i++) {
    if (!isFind[i]) { // если датчик ещё не найден
      if (!ds[i].search(rom[i])) {
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


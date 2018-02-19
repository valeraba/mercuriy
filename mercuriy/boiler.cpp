#include <Arduino.h>
#include "boiler.h"
#include <PWMServo.h>
#include "pins.h"

void debugLog(const __FlashStringHelper* aFormat, ...);

Coefficients coefficients;

static PWMServo servo1;
static PWMServo servo2;
static PWMServo servo3;

static byte valServo1;
static byte valServo2;
static byte valServo3;
static bool powerServoState = false;
static unsigned long powerServoTime;

bool kotelActive = false, systemCRIHot = false;
float txaTemp;
float oxygen;
float tempCels[4];
bool sensorOnline[4] = { false, false, false, false };

static bool ignition = false; 
static bool isSetDymosos = false; // возможность установки другого значения


bool getNasosKranKotel() { return !digitalRead(pinNasosKranKotel); }
bool getNasosPotrebiteli() { return !digitalRead(pinNasosPotrebiteli); }
bool getDymosos() { return !digitalRead(pinDymosos); }
bool getKranTA() { return !digitalRead(pinKranTA); }
bool getZaslonkaDymohod() { return !digitalRead(pinZaslonkaDymohod); }

//----функции для удалённого управления, наверное это не нужно?-------------
bool setNasosKranKotel(bool aState) { digitalWrite(pinNasosKranKotel, !aState); return true; }
bool setNasosPotrebiteli(bool aState) { digitalWrite(pinNasosPotrebiteli, !aState); return true; }
bool setDymosos(bool aState) {
  if (!isSetDymosos) // если установка не разрешена
    return false;
  digitalWrite(pinDymosos, !aState);
  return true;
}
bool setKranTA(bool aState) { digitalWrite(pinKranTA, !aState); return true; }
bool setZaslonkaDymohod(bool aState) { digitalWrite(pinZaslonkaDymohod, !aState); return true; }

byte getServo1() { return valServo1; }
byte getServo2() { return valServo2; }
byte getServo3() { return valServo3; }

static void on(int relay) {
  digitalWrite(relay, LOW);
}
static void off(int relay) {
  digitalWrite(relay, HIGH);
}

void setServo1(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo1 = aValue;
  aValue = (byte)((float)(100 - aValue) * 1.7); // от 0 до 170 град.
  servo1.write(aValue);
  on(pinPowerServo); // включим питание серв
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
  debugLog(F("powerServo ON, t = %lu\n"), powerServoTime); // TODO для отладки
}
void setServo2(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo2 = aValue;
  aValue = (byte)(100 - aValue); // 0 до 100 град.
  servo2.write(aValue);
  on(pinPowerServo); // включим питание серв
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
  debugLog(F("powerServo ON, t = %lu\n"), powerServoTime); // TODO для отладки
}
void setServo3(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo3 = aValue;
  aValue = (byte)((float)(100 - aValue) * 0.9); // от 0 до 90 град.
  servo3.write(aValue);
  on(pinPowerServo); // включим питание серв
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
  debugLog(F("powerServo ON, t = %lu\n"), powerServoTime); // TODO для отладки
}

bool getIgnition() {
  return ignition;
}
bool setIgnition(bool aValue) {
  if (txaTemp > coefficients.dymosos_off) // Температура дыма больше чем (по умолчанию 135 градусов)
    return false;
  if (tempCels[Kotel_Vyhod] > coefficients.systemCRIHot_max) // если котел перегрет больше чем (по умолчанию 96 градусов)
    return false;
  ignition = aValue;
  return true;
}

void boiler_init() {
  //---------Определение первоначальных состояний цифровым выходам--------
  pinMode(pinZaslonkaDymohod, OUTPUT); // Назначаем порт "Выходом"
  pinMode(pinKranTA, OUTPUT); // Назначаем порт "Выходом"
  pinMode(pinNasosPotrebiteli, OUTPUT); // Назначаем порт "Выходом"
  pinMode(pinDymosos, OUTPUT); // Назначаем порт "Выходом"
  pinMode(pinNasosKranKotel, OUTPUT); // Назначаем порт "Выходом"
  pinMode(pinPowerServo, OUTPUT); // Назначаем порт "Выходом
  digitalWrite(pinZaslonkaDymohod, LOW); // Назначаем первичное состояние ячейки Воздушой заслонки "LOW" - заслонка дымохода открыта
  digitalWrite(pinKranTA, LOW); // Назначаем первичное состояние ячейки Крана ТА "HIGH"
  digitalWrite(pinNasosPotrebiteli, HIGH); // Назначаем первичное состояние ячейки Насос потребители "HIGH"
  digitalWrite(pinDymosos, HIGH); // Назначаем первичное состояние ячейки Дымососа "HIGH"
  digitalWrite(pinNasosKranKotel, LOW); // Назначаем первичное состояние ячейки Насоса и крана котла "HIGH"
  digitalWrite(pinPowerServo, HIGH); // Назначаем первичное состояние питания Servo "HIGH"

  servo1.attach(pinServo1);
  servo2.attach(pinServo2);
  servo3.attach(pinServo3);//the pin for the servo control // Указываем к какому пину подключена servo
  setServo1(0, true);
  setServo2(0, true);
  setServo3(0, true);
}

// управление котлом
void boiler_work() {
  isSetDymosos = false;
  
  if (powerServoState) { // если питание серв включено
    unsigned long t = millis();
    if (powerServoTime >  t) // если произошло переполнение счётчика
      powerServoTime = t;
    else if (t > (unsigned long)(powerServoTime + 5000)) { // если с момента последнего включения прошло более 5 секунд
      off(pinPowerServo); // выключим питание серв
      powerServoState = false;  
      debugLog(F("powerServo OFF, t = %lu\n"), t); // TODO для отладки
    }
  } 
  
  //-----------------------------
  // Условия определяющие состояние Котла -kotelActive-
  //--------------------------------------
  if (tempCels[Kotel_Vyhod] > 95 || txaTemp > 109) // если температура воды
    kotelActive = true; //на выходе из котла более 95 градусов или дыма более 109 (105) градусов  
  if (tempCels[Kotel_Vyhod] < 94 && txaTemp < 108) // если  температура воды менее 94 и
    kotelActive = false;//  температура дыма менее 108 (100) град. С


  //---------------------
  // Порядок работы СО в период работы котла (kotelActive)
  //----------------------
  if (kotelActive || ignition) {
    on(pinNasosKranKotel);

    // Условие определяющее включение циркуляционного насаса потребителей 
    static bool systemHot = false;
    if (tempCels[Kotel_Vyhod] > coefficients.nasosPotrebitel_on) // если температура котла больше чем (по умолчанию 65 градусов)
      systemHot = true;
    else if (tempCels[Kotel_Vyhod] < coefficients.nasosPotrebitel_off) // если температура котла меньше чем (по умолчанию 60 градусов)
      systemHot = false;
    if (systemHot)
      on(pinNasosPotrebiteli); // включает насос потребителей
    else
      off(pinNasosPotrebiteli);

    // Условие определяющее подпитку Котла водой из ТА
    static bool systemVeryHot = false;
    if (tempCels[Kotel_Vyhod] > coefficients.kranTaJob_on) // если температура котла больше чем (по умолчанию 85 градусов)
      systemVeryHot = true;
    else if (tempCels[Kotel_Vyhod] < coefficients.kranTaJob_off) // если температура котла меньше чем (по умолчанию 84 градуса)
      systemVeryHot = false;
    if (systemVeryHot)
      on(pinKranTA); // в случае нагрева котла открыть кран подачи в ТА
    else
      off(pinKranTA);

    static byte saveServo1; // здесь сохраннёные состояния положений заслонок
    static byte saveServo2;
    static byte saveServo3;
    static bool prevState = false;

    // Условие работы заслонки дыма и дымососа при перегреве котла
    if (tempCels[Kotel_Vyhod] > coefficients.systemCRIHot_max) // если котел перегрет больше чем (по умолчанию 96 градусов)
      systemCRIHot = true;
    else if (tempCels[Kotel_Vyhod] < coefficients.systemCRIHot_min) // если котел не перегрет меньше чем (по умолчанию 95 градусов)
     systemCRIHot = false;
    if (systemCRIHot) { // если котел перегрет
      ignition = false; // переход в автоматический режим
      on(pinZaslonkaDymohod); // закроет заслонку дым трубы, остановить подачу воздуха в котел
      off(pinDymosos);// остановит мотор дымососа;

      if (!prevState) { // если произошло изменение состояния
        saveServo1 = valServo1; // сохраним положение всех заслонок
        saveServo2 = valServo2;
        saveServo3 = valServo3;
        setServo1(0, true); // закроем все заслоноки
        setServo2(0, true);
        setServo3(0, true);
      }
    }
    else {
      isSetDymosos = true; // разрешить внешнюю установку
      
      //-----Условия работы дымососа----------
      if (txaTemp < coefficients.dymosos_on) // Температура дыма меньше чем (по умолчанию 114 градусов)
        on(pinDymosos);// включит мотор дымососа;  
      else if (txaTemp > coefficients.dymosos_off) { // Температура дыма больше чем (по умолчанию 135 градусов)
        ignition = false; // переход в автоматический режим
        off(pinDymosos);// остановит мотор дымососа
      }

      // если мотор дымососа включён, то закроем заслонку дымовой трубы
      // если мотор дымососа выключен, то откроем заслонку дымовой трубы
      setZaslonkaDymohod(getDymosos());
      //-------------------------------------      

      if (prevState) { // если произошло изменение состояния
        setServo1(saveServo1); // восстановим сохранённое положение всех заслонок
        setServo2(saveServo2);
        setServo3(saveServo3);
      }
    }
    prevState = systemCRIHot; // сохраним текущее состояние

    // окончание описания состояния оборудования в период работы котла (kotelActive)
  }
  //--------------------------
  else { // Состояние оборудования в период когда котел "спит"
    off(pinNasosKranKotel); // Остановлен насос котла, закрыт кран котла
    on(pinZaslonkaDymohod); // остановить подачу воздуха в котел
    off(pinDymosos);

    // Условия определяющие состояние ТА при разборе с него тепла (для спящего режима)
    static bool accumulatorWarm = false;
    if (tempCels[Verh_TA] > coefficients.kranTaSleep_on) // есть ли в аккумуляторе тепло больше чем (по умолчанию 28С)
      accumulatorWarm = true;
    else if (tempCels[Verh_TA] < coefficients.kranTaSleep_off) // есть ли в аккумуляторе холодно меньше чем (по умолчанию 27С)
      accumulatorWarm = false;
    if (accumulatorWarm) { // если в аккумуляторе есть тепло
      on(pinKranTA); // обогрев  
      on(pinNasosPotrebiteli);  // ТА
    }
    else {
      off(pinNasosPotrebiteli);
      off(pinKranTA);
    }
    // окончание описания состояния оборудования в период когда котел "спит"
  }
}

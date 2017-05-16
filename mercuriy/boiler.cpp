#include <Arduino.h>
#include "boiler.h"
#include <PWMServo.h> 

//------- закрепляю за оборудованием цифровые выходы ардуино---------------
#define kranTA 45             // Реле 1 - верхнее - КЭ2 (кран ТА)
#define nasosPotrebiteli 43   // Реле 2 - второе сверху НЦ2, НЦ3, НЦ4 (насосы потребителей)
#define dymosos 41            // Реле 3 - третье сверху - Дымосос 
#define nasosKranKotel 39     // Реле 4 - нижнее - НЦ1, КЭ1 (насос и кран контура котла)
#define zaslonkaDymohod 47    // Реле 4 нижний блок (нижнее)- МЗ(привод заслонки дымохода)  
#define powerServo 49         // Реле 3 нижний блок - питание Сервоприводов

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



bool getNasosKranKotel() { return !digitalRead(nasosKranKotel); }
bool getNasosPotrebiteli() { return !digitalRead(nasosPotrebiteli); }
bool getDymosos() { return !digitalRead(dymosos); }
bool getKranTA() { return !digitalRead(kranTA); }
bool getZaslonkaDymohod() { return !digitalRead(zaslonkaDymohod); }

//----функции для удалённого управления, наверное это не нужно?-------------
bool setNasosKranKotel(bool aState) { digitalWrite(nasosKranKotel, !aState); return true; }
bool setNasosPotrebiteli(bool aState) { digitalWrite(nasosPotrebiteli, !aState); return true; }
bool setDymosos(bool aState) { digitalWrite(dymosos, !aState); return true; }
bool setKranTA(bool aState) { digitalWrite(kranTA, !aState); return true; }
bool setZaslonkaDymohod(bool aState) { digitalWrite(zaslonkaDymohod, !aState); return true; }

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
  on(powerServo); // включим питание серв
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
  on(powerServo); // включим питание серв
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
  on(powerServo); // включим питание серв
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
  debugLog(F("powerServo ON, t = %lu\n"), powerServoTime); // TODO для отладки
}

void boiler_init() {
  //---------Определение первоначальных состояний цифровым выходам--------
  pinMode(zaslonkaDymohod, OUTPUT); // Назначаем порт "Выходом"
  pinMode(kranTA, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosPotrebiteli, OUTPUT); // Назначаем порт "Выходом"
  pinMode(dymosos, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosKranKotel, OUTPUT); // Назначаем порт "Выходом"
  pinMode(powerServo, OUTPUT); // Назначаем порт "Выходом
  digitalWrite(zaslonkaDymohod, LOW); // Назначаем первичное состояние ячейки Воздушой заслонки "LOW" - заслонка дымохода открыта
  digitalWrite(kranTA, LOW); // Назначаем первичное состояние ячейки Крана ТА "HIGH"
  digitalWrite(nasosPotrebiteli, HIGH); // Назначаем первичное состояние ячейки Насос потребители "HIGH"
  digitalWrite(dymosos, HIGH); // Назначаем первичное состояние ячейки Дымососа "HIGH"
  digitalWrite(nasosKranKotel, LOW); // Назначаем первичное состояние ячейки Насоса и крана котла "HIGH"
  digitalWrite(powerServo, HIGH); // Назначаем первичное состояние питания Servo "HIGH"

  servo1.attach(11);
  servo2.attach(12);
  servo3.attach(13);//the pin for the servo control // Указываем к какому пину подключена servo
  setServo1(0, true);
  setServo2(0, true);
  setServo3(0, true);
}

// управление котлом
void boiler_work() {
  if (powerServoState) { // если питание серв включено
    unsigned long t = millis();
    if (powerServoTime >  t) // если произошло переполнение счётчика
      powerServoTime = t;
    else if (t > (unsigned long)(powerServoTime + 5000)) { // если с момента последнего включения прошло более 5 секунд
      off(powerServo); // выключим питание серв
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
  if (kotelActive) {
    on(nasosKranKotel);

    // Условие определяющее включение циркуляционного насаса потребителей 
    static bool systemHot = false;
    if (tempCels[Kotel_Vyhod] > coefficients.nasosPotrebitel_on) // если температура котла больше чем (по умолчанию 65 градусов)
      systemHot = true;
    else if (tempCels[Kotel_Vyhod] < coefficients.nasosPotrebitel_off) // если температура котла меньше чем (по умолчанию 60 градусов)
      systemHot = false;
    if (systemHot)
      on(nasosPotrebiteli); // включает насос потребителей
    else
      off(nasosPotrebiteli);

    // Условие определяющее подпитку Котла водой из ТА
    static bool systemVeryHot = false;
    if (tempCels[Kotel_Vyhod] > coefficients.kranTaJob_on) // если температура котла больше чем (по умолчанию 85 градусов)
      systemVeryHot = true;
    else if (tempCels[Kotel_Vyhod] < coefficients.kranTaJob_off) // если температура котла меньше чем (по умолчанию 84 градуса)
      systemVeryHot = false;
    if (systemVeryHot)
      on(kranTA); // в случае нагрева котла открыть кран подачи в ТА
    else
      off(kranTA);

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
      on(zaslonkaDymohod); // закроет заслонку дым трубы, остановить подачу воздуха в котел
      off(dymosos);// остановит мотор дымососа;

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
      // Условия работы дымососа
      if (txaTemp < coefficients.dymosos_on) { // Температура дыма меньше чем (по умолчанию 114 градусов)
        on(zaslonkaDymohod);// Закроет заслонку дым трубы, 
        on(dymosos);// включит мотор дымососа;  
      }
      else if (txaTemp > coefficients.dymosos_off) { // Температура дыма больше чем (по умолчанию 135 градусов)
        off(dymosos);// остановит мотор дымососа
        off(zaslonkaDymohod);// Откроет заслонку дым. трубы
      }

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
    off(nasosKranKotel); // Остановлен насос котла, закрыт кран котла
    on(zaslonkaDymohod); // остановить подачу воздуха в котел
    off(dymosos);

    // Условия определяющие состояние ТА при разборе с него тепла (для спящего режима)
    static bool accumulatorWarm = false;
    if (tempCels[Verh_TA] > coefficients.kranTaSleep_on) // есть ли в аккумуляторе тепло больше чем (по умолчанию 28С)
      accumulatorWarm = true;
    else if (tempCels[Verh_TA] < coefficients.kranTaSleep_off) // есть ли в аккумуляторе холодно меньше чем (по умолчанию 27С)
      accumulatorWarm = false;
    if (accumulatorWarm) { // если в аккумуляторе есть тепло
      on(kranTA); // обогрев  
      on(nasosPotrebiteli);  // ТА
    }
    else {
      off(nasosPotrebiteli);
      off(kranTA);
    }
    // окончание описания состояния оборудования в период когда котел "спит"
  }
}

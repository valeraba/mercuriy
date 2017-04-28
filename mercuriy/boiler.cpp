#include <Arduino.h>
#include "boiler.h"
#include <PWMServo.h> 

//------- закрепляю за оборудованием цифровые выходы ардуино---------------
#define kranTA 45             // Реле 1 - верхнее - КЭ2 
#define nasosPotrebiteli 43   // Реле 2 - третье снизу НЦ2, НЦ3, НЦ4
#define dymosos 41            // Реле 3 - второе снизу - Дымосос 
#define nasosKranKotel 39     // Реле 4 - нижнее - НЦ1, КЭ1 
#define zaslonkaVozduha 47    // Реле 4 нижний блок (нижнее)- МЗ  
#define powerServo 49         // Реле 3 нижний блок питание Сервоприводов

static PWMServo servo1;
static PWMServo servo2;
static PWMServo servo3;

static byte valServo1;
static byte valServo2;
static byte valServo3;
static bool powerServoState = false;
static unsigned long powerServoTime;

bool kotelActive = false, accumulatorWarm = false, systemHot = false, systemCRIHot = false, systemVeryHot = false, dymVeryCold = false, postplenieGar = false;
float txaTemp;
float oxygen;
float tempCels[4];
bool sensorOnline[4] = { false, false, false, false };


bool getNasosKranKotel() { return !digitalRead(nasosKranKotel); }
bool getNasosPotrebiteli() { return !digitalRead(nasosPotrebiteli); }
bool getDymosos() { return !digitalRead(dymosos); }
bool getKranTA() { return !digitalRead(kranTA); }
bool getZaslonkaVozduha() { return !digitalRead(zaslonkaVozduha); }

//----функции для удалённого управления, наверное это не нужно?-------------
bool setNasosKranKotel(bool aState) { digitalWrite(nasosKranKotel, !aState); return true; }
bool setNasosPotrebiteli(bool aState) { digitalWrite(nasosPotrebiteli, !aState); return true; }
bool setDymosos(bool aState) { digitalWrite(dymosos, !aState); return true; }
bool setKranTA(bool aState) { digitalWrite(kranTA, !aState); return true; }
bool setZaslonkaVozduha(bool aState) { digitalWrite(zaslonkaVozduha, !aState); return true; }

byte getServo1() { return valServo1; }
byte getServo2() { return valServo2; }
byte getServo3() { return valServo3; }

void setServo1(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo1 = aValue;
  aValue = (byte)((float)(100 - aValue) * 1.7); // от 0 до 170 град.
  servo1.write(aValue);
  digitalWrite(powerServo, HIGH);
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
}
void setServo2(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo2 = aValue;
  aValue = (byte)(100 - aValue); // 0 до 100 град.
  servo2.write(aValue);
  digitalWrite(powerServo, HIGH);
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
}
void setServo3(byte aValue, bool aForce = false) {
  if ((systemCRIHot) && (!aForce)) // если котел перегрет
    return;
  if (aValue > 100)
    aValue = 100;
  valServo3 = aValue;
  aValue = (byte)((float)(100 - aValue) * 0.9); // от 0 до 90 град.
  servo3.write(aValue);
  digitalWrite(powerServo, HIGH);
  powerServoState = true;
  powerServoTime = millis(); // запомним время включения
}

static void on(int relay) {
  digitalWrite(relay, LOW);
}
//----------------------------- 
static void off(int relay) {
  digitalWrite(relay, HIGH);
}

void boiler_init() {
  //---------Определение первоначальных состояний цифровым выходам--------
  pinMode(zaslonkaVozduha, OUTPUT); // Назначаем порт "Выходом"
  pinMode(kranTA, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosPotrebiteli, OUTPUT); // Назначаем порт "Выходом"
  pinMode(dymosos, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosKranKotel, OUTPUT); // Назначаем порт "Выходом"
  pinMode(powerServo, OUTPUT); // Назначаем порт "Выходом
  digitalWrite(zaslonkaVozduha, HIGH); // Назначаем первичное состояние ячейки Воздушой заслонки "HIGH" - подача воздуха закрыта
  digitalWrite(kranTA, LOW); // Назначаем первичное состояние ячейки Крана ТА "HIGH"
  digitalWrite(nasosPotrebiteli, HIGH); // Назначаем первичное состояние ячейки Насос потребители "HIGH"
  digitalWrite(dymosos, HIGH); // Назначаем первичное состояние ячейки Дымососа "HIGH"
  digitalWrite(nasosKranKotel, LOW); // Назначаем первичное состояние ячейки Насоса и крана котла "HIGH"
  digitalWrite(powerServo, LOW); // Назначаем первичное состояние ячейки Насоса и крана котла "LOW"

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
    else if (powerServoTime > (unsigned long)(t + 5000)) { // если с момента последнего включения прошло более 5 секунд
      digitalWrite(powerServo, LOW); // выключим питание серв
      powerServoState = false;  
    }
  } 
  
  //-----------------------------
  // Условия определяющие состояние Котла -kotelActive-
  //--------------------------------------
  if (tempCels[Kotel_Vyhod] > 95 || txaTemp > 109) // если температура воды
    kotelActive = true; //на выходе из котла более 95 градусов или дыма более 109 (105) градусов  
  if (tempCels[Kotel_Vyhod] < 94 && txaTemp < 108) // если  температура воды менее 94 и
    kotelActive = false;//  температура дыма менее 108 (100) град. С

  //-----------------------------
  // Условия определяющие состояние ТА при разборе с него тепла
  //-----------------------------------
  if (tempCels[Verh_TA] > 28) // есть ли в аккумуляторе тепло (больше чем 27С)
    accumulatorWarm = true;
  else if (tempCels[Verh_TA] < 27) // есть ли в аккумуляторе холодно (мньше чем 27С)
    accumulatorWarm = false;

  //-----------------------------
  // Условие определяющее состояние Заслонки Дыма при перегреве котла
  //-----------------------------
  if (tempCels[Kotel_Vyhod] > 96) // если котел нагрет, более 96 градусов
    systemCRIHot = true;
  else if (tempCels[Kotel_Vyhod] < 95) // если котел нагрет, менее 95 градусов
    systemCRIHot = false;

  //-----------------------------
  // Условие определяющее подпитку Котла водой из ТА
  //-----------------------------
  if (tempCels[Kotel_Vyhod] > 85) // если температура котла более 85 градусов
    systemVeryHot = true;
  else if (tempCels[Kotel_Vyhod] < 84) // если температура котла меньше 84 градусов
    systemVeryHot = false;

  //-----------------------------
  // Условие определяющее включение циркуляционного насаса потребителей
  //-----------------------------
  if (tempCels[Kotel_Vyhod] > 65) // если температура котла больше 70 градусов
    systemHot = true;
  else if (tempCels[Kotel_Vyhod] < 60) // если температура котла меньше 60 градусов
    systemHot = false;

  //---------------------
  // Порядок работы СО в период работы котла (kotelActive)
  //----------------------
  if (kotelActive) {
    on(nasosKranKotel);

    // Условие включения насоса потребителей 
    if (systemHot)
      on(nasosPotrebiteli); // при достижении 65 град включает насос потребителей
    else
      off(nasosPotrebiteli);

    // Условие открытия кран ТА по перегреву
    if (systemVeryHot)
      on(kranTA); // в случае нагрева котла до 85 градусов открыть кран подачи в ТА
    else
      off(kranTA);

    static byte saveServo1; // здесь сохраннёные состояния положений заслонок
    static byte saveServo2;
    static byte saveServo3;
    static bool prevState = false;

    // Условие работы звслонки дыма и дымососа при перегреве котла выше 95 гр.
    if (systemCRIHot) { // Если котел перегрет более 95 градусов
      on(zaslonkaVozduha);// Закроет заслонку дым трубы, остановить подачу воздуха в котел
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
      if (txaTemp < 114) { // Температура дыма меньше 114 градусов
        on(zaslonkaVozduha);// Закроет заслонку дым трубы, 
        on(dymosos);// включит мотор дымососа;  
      }
      else if (txaTemp > 135) { // Температура дыма больше 135 градусов
        off(dymosos);// остановит мотор дымососа
        off(zaslonkaVozduha);// Откроет заслонку дым. трубы
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
    on(zaslonkaVozduha); // остановить подачу воздуха в котел
    off(dymosos);
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

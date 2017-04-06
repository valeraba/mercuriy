#include <Arduino.h>
#include "boiler.h"
#include <PWMServo.h> 

//------- закрепляю за оборудованием цифровые выходы ардуино---------------
#define nasosKranKotel 47     // Реле 1 - верхнее - НЦ1, КЭ1 47
#define nasosPotrebiteli 48   // Реле не присвоено - НЦ2, НЦ3, НЦ4 48
#define dymosos 44            // Реле 2 - второе сверху - Дымосос 44
#define kranTA 45             // Реле 3 - третье сверху - КЭ2 45
#define zaslonkaVozduha 46    // Реле 4 - нижнее - МЗ 46

static PWMServo servo1;
static PWMServo servo2;
static PWMServo servo3;

static byte valServo1;
static byte valServo2;
static byte valServo3;

boolean reactorActive = 0, accumulatorWarm = 0, systemCRIHot = 0, systemVeryHot = 0, dymVeryCold = 0, postplenieGar = 0;
float txaTemp;
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

void setServo1(byte aValue) {
  if (aValue > 100)
    aValue = 100; 
  valServo1 = aValue;
  aValue = (byte)((float)(100 - aValue) * 1.7); // от 0 до 170 град.
  servo1.write(aValue);
}
void setServo2(byte aValue) {
  if (aValue > 100)
    aValue = 100;
  valServo2 = aValue;
  aValue = (byte)(100 - aValue); // 0 до 100 град.
  servo2.write(aValue);
}
void setServo3(byte aValue) {
  if (aValue > 100)
    aValue = 100;
  valServo3 = aValue;
  aValue = (byte)((float)(100 - aValue) * 0.9); // от 0 до 90 град.
  servo3.write(aValue);
}

static void on(int relay) {
  digitalWrite(relay, LOW);  
}
//----------------------------- 
static void off(int relay){
  digitalWrite(relay, HIGH);  
}

void boiler_init() {
  //---------Определение первоначальных состояний цифровым выходам--------
  pinMode(zaslonkaVozduha, OUTPUT); // Назначаем порт "Выходом"
  pinMode(kranTA, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosPotrebiteli, OUTPUT); // Назначаем порт "Выходом"
  pinMode(dymosos, OUTPUT); // Назначаем порт "Выходом"
  pinMode(nasosKranKotel, OUTPUT); // Назначаем порт "Выходом"
  digitalWrite(zaslonkaVozduha, HIGH); // Назначаем первичное состояние ячейки Воздушой заслонки "HIGH" - подача воздуха закрыта
  digitalWrite(kranTA, LOW); // Назначаем первичное состояние ячейки Крана ТА "HIGH"
  digitalWrite(nasosPotrebiteli, HIGH); // Назначаем первичное состояние ячейки Насос потребители "HIGH"
  digitalWrite(dymosos, HIGH); // Назначаем первичное состояние ячейки Дымососа "HIGH"
  digitalWrite(nasosKranKotel, LOW); // Назначаем первичное состояние ячейки Насоса и крана котла "HIGH"

  servo1.attach(11);
  servo2.attach(12);
  servo3.attach(13);//the pin for the servo control // Указываем к какому пину подключена servo
  setServo1(40);
  setServo2(60);
  setServo3(100);
}

// управление котлом
void boiler_work() {
    //-----------------------------
    // Условия определяющие состояние Котла -reactorActive-
    //--------------------------------------
    if (tempCels[Kotel_Vyhod] > 95 || txaTemp > 109) { // если температура воды
      reactorActive = 1;//на выходе из котла более 95 градусов или дыма более 109 (105) градусов  
    }
    if (tempCels[Kotel_Vyhod] < 94 && txaTemp < 108) { // если  температура воды менее 94 и
      reactorActive = 0;//  температура дыма менее 108 (100) град. С
    }
    //-----------------------------
    // Условия определяющие состояние ТА при разборе с него тепла
    //-----------------------------------
    if (tempCels[Verh_TA] > 28) { // есть ли в аккумуляторе тепло (больше чем 27С)
      accumulatorWarm = 1;
    }
    if (tempCels[Verh_TA] <28) { // есть ли в аккумуляторе холодно (мньше чем 27С)
      accumulatorWarm = 0;
    }
    //-----------------------------
    // Условие определяющее состояние Заслонки Дыма при перегреве котла
    //-----------------------------
    if (tempCels[Kotel_Vyhod] > 96) { // если котел нагрет, более 96 градусов
      systemCRIHot = 1;
    }
    if (tempCels[Kotel_Vyhod] < 95) { // если котел нагрет, менее 95 градусов
      systemCRIHot = 0;
    }
    //-----------------------------
    // Условие определяющее подпитку Котла водой из ТА
    //-----------------------------
    if (tempCels[Kotel_Vyhod] > 85) { // если температура котла более 85 градусов
      systemVeryHot = 1;
    }
    if (tempCels[Kotel_Vyhod] < 84) { // если температура котла меньше 84 градусов
      systemVeryHot = 0;
    }
    //---------------------
    // Порядок работы СО в период работы котла (reactorActive)
    //----------------------
    if (reactorActive) {
      on(nasosKranKotel);
      // Условие открытия кран ТА по перегреву
      if (systemVeryHot) {
        on(kranTA); // в случае нагрева котла до 85 градусов открыть кран подачи в ТА
      }
      else {
        off(kranTA);
      }
      // Условия работы дымососа
      if (txaTemp < 114) { // Температура дыма меньше 114 градусов
        on(zaslonkaVozduha);// Закроет заслонку дым трубы, 
        on(dymosos);// включит мотор дымососа;  
      }
      else if (txaTemp > 135) { // Температура дыма больше 135 градусов
        off(dymosos);// остановит мотор дымососа
        off(zaslonkaVozduha);// Откроет заслонку дым. трубы
      }
      // Условие работы звслонки дыма и дымососа при перегреве котла выше 95 гр.
      if (systemCRIHot) { // Если котел перегрет более 95 градусов
        on(zaslonkaVozduha);// Закроет заслонку дым трубы, остановить подачу воздуха в котел
        off(dymosos);// остановит мотор дымососа;
      }
      else {
        off(zaslonkaVozduha);// откроет подачу воздуха в котел
      }
    }
    //Окончание функции описывающей Порядок работы СО в период работы котла (reactorActive)
    //--------------------------
    else {// Состояние оборудования в период когда котел "спит"
      off(nasosKranKotel); // Остановлен насос котла, закрыт кран котла
      on(zaslonkaVozduha); // остановить подачу воздуха в котел
      off(dymosos);
      if (accumulatorWarm) { // если в аккумуляторе есть тепло
        on(kranTA); // обогрев  
        //delay(1000);
        on(nasosPotrebiteli);  // ТА
      }
      else {
        off(nasosPotrebiteli);
        //delay(1000);
        off(kranTA);
      }
    }//окончанеи описания Состояния оборудования в период когда котел "спит"
    
    }

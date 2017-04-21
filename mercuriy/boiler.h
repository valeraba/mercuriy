#ifndef _boiler_H_
#define _boiler_H_

#define Kotel_Vyhod 0    // ДТ2
#define Kotel_Obratka 1  // ДТ3
#define Verh_TA 2        // ДТ4
#define Niz_TA 3         // ДТ5

bool getNasosKranKotel();
bool getNasosPotrebiteli();
bool getDymosos();
bool getKranTA();
bool getZaslonkaVozduha();

bool setNasosKranKotel(bool aState);
bool setNasosPotrebiteli(bool aState);
bool setDymosos(bool aState);
bool setKranTA(bool aState);
bool setZaslonkaVozduha(bool aState);

byte getServo1();
byte getServo2();
byte getServo3();

void setServo1(byte aValue);
void setServo2(byte aValue);
void setServo3(byte aValue);


//-------------присваеваем тип значения переменной для описывающей состояние Отопительной системы - boolean---------
//extern boolean reactorActive, accumulatorWarm, systemCRIHot, systemVeryHot, dymVeryCold, postplenieGar;

//----датчики--------------
extern float txaTemp; // Dymovaya_Truba"; // ТХА  
extern float oxygen;
extern float tempCels[4]; // массив считанных значений 1-wire
                  // Kotel_Vyhod";    // ДТ2
                  // Kotel_Obratka";  // ДТ3
                  // Verh_TA";        // ДТ4
                  // Niz_TA";         // ДТ5
extern bool sensorOnline[4];

// инициализация
void boiler_init();

// управление котлом
void boiler_work();

#endif //_boiler_H_

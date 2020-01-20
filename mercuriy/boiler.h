#ifndef _boiler_H_
#define _boiler_H_

#define Kotel_Vyhod 0    // ДТ2
#define Kotel_Obratka 1  // ДТ3
#define Verh_TA 2        // ДТ4
#define Niz_TA 3         // ДТ5

#pragma pack(push, 1)
struct Coefficients {
  byte kranTaJob_on;
  byte kranTaJob_off;
  byte kranTaSleep_on;
  byte kranTaSleep_off;
  byte nasosPotrebitel_on;
  byte nasosPotrebitel_off;
  byte dymosos_on;
  byte dymosos_off;
  byte systemCRIHot_max;
  byte systemCRIHot_min;
};
#pragma pack(pop)

extern Coefficients coefficients;

void coefficientsRead(); // вычитаем коэффициенты из EEPROM
void coefficientsSave(); // сохраним коэффициенты в EEPROM

bool getNasosKranKotel();
bool getNasosPotrebiteli();
bool getDymosos();
bool getKranTA();
bool getZaslonkaDymohod();

bool setNasosKranKotel(bool aState);
bool setNasosPotrebiteli(bool aState);
bool setDymosos(bool aState);
bool setKranTA(bool aState);
bool setZaslonkaDymohod(bool aState);

byte getServo1();
byte getServo2();
byte getServo3();

void setServo1(byte aValue, bool aForce = false);
void setServo2(byte aValue, bool aForce = false);
void setServo3(byte aValue, bool aForce = false);

bool getIgnition();
bool setIgnition(bool aValue);

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

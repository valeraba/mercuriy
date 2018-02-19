#ifndef _PINS_H_
#define _PINS_H_

// Раскомментируйте нижнюю строчку для старой версии блока
//#define OLD_DEVICE


#ifdef OLD_DEVICE
  //========Старая версия============
  /*Используются цифровые выходы
  * Дисплей: 44, 46, 48
  * Реле: 39, 41, 43, 45, 47, 49
  * Термопара: 24, 26, 28
  * DS18b20: 25, 27, 29, 31
  * Сервоприводы: 11, 12, 13
  * Лямбда: A0
  */
  
  //--------Дисплей-----------------
  #define pinU8SCK  48 // E
  #define pinU8MOSI 46 // R/W
  #define pinU8CS   44 // D/I
  // Кроме этого GND на (VSS, K(BLK) и PSB), +5В на (VDD и А(BLA))
  
  //--------Термопара MAX31855-------
  #define pinThermoDO  28
  #define pinThermoCS  26
  #define pinThermoCLK 24
  
  //--------Сервоприводы-------------
  #define pinServo1 11
  #define pinServo2 12
  #define pinServo3 13
  
  //--------Реле---------------------
  #define pinKranTA 45             // Реле 1 - верхнее - КЭ2 (кран ТА)
  #define pinNasosPotrebiteli 43   // Реле 2 - второе сверху НЦ2, НЦ3, НЦ4 (насосы потребителей)
  #define pinDymosos 41            // Реле 3 - третье сверху - Дымосос 
  #define pinNasosKranKotel 39     // Реле 4 - нижнее - НЦ1, КЭ1 (насос и кран контура котла)
  #define pinZaslonkaDymohod 47    // Реле 4 нижний блок (нижнее)- МЗ(привод заслонки дымохода)  
  #define pinPowerServo 49         // Реле 3 нижний блок - питание Сервоприводов
  
  //--------DS18b20------------------
  #define pinDS2 31  // Температура воды Котел подача  ДТ2
  #define pinDS3 29  // Температура воды Котел обратка ДТ3
  #define pinDS4 27  // Температура воды ТА Верхняя часть ДТ4
  #define pinDS5 25  // Температура воды ТА Нижняя  часть ДТ5

#else
  //========Новая версия============

  //--------Дисплей-----------------
  #define pinU8SCK  44 //E
  #define pinU8MOSI 46 // R/W
  #define pinU8CS   48 // D/I
  // Кроме этого GND на (VSS, K(BLK) и PSB), +5В на (VDD и А(BLA))
  
  //--------Термопара MAX31855-------
  #define pinThermoDO  47
  #define pinThermoCS  49
  #define pinThermoCLK 53
  
  //--------Сервоприводы-------------
  #define pinServo1 11
  #define pinServo2 12
  #define pinServo3 13
  
  //--------Реле---------------------
  #define pinDymosos 28            // Реле 1 - верхнее - КЭ2 (кран ТА)
  #define pinNasosKranKotel 26     // Реле 2 - второе сверху НЦ2, НЦ3, НЦ4 (насосы потребителей)
  #define pinNasosPotrebiteli 24   // Реле 3 - третье сверху - Дымосос 
  #define pinKranTA 22             // Реле 4 - нижнее - НЦ1, КЭ1 (насос и кран контура котла)
  #define pinZaslonkaDymohod 23    // Реле 1 нижний блок (нижнее)- МЗ(привод заслонки дымохода)  
  #define pinPowerServo 25         // Реле 2 нижний блок - питание Сервоприводов
  
  //--------DS18b20------------------
  #define pinDS2 36  // Температура воды Котел подача  ДТ2
  #define pinDS3 38  // Температура воды Котел обратка ДТ3
  #define pinDS4 40  // Температура воды ТА Верхняя часть ДТ4
  #define pinDS5 42  // Температура воды ТА Нижняя  часть ДТ5

#endif

#endif

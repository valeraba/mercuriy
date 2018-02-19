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
  #define pinU8SCK  48
  #define pinU8MOSI 46
  #define pinU8CS   44
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
  #define pinU8SCK  ?
  #define pinU8MOSI ?
  #define pinU8CS   ?
  // Кроме этого GND на (VSS, K(BLK) и PSB), +5В на (VDD и А(BLA))
  
  //--------Термопара MAX31855-------
  #define pinThermoDO  ?
  #define pinThermoCS  ?
  #define pinThermoCLK ?
  
  //--------Сервоприводы-------------
  #define pinServo1 ?
  #define pinServo2 ?
  #define pinServo3 ?
  
  //--------Реле---------------------
  #define pinKranTA ?             // Реле 1 - верхнее - КЭ2 (кран ТА)
  #define pinNasosPotrebiteli ?   // Реле 2 - второе сверху НЦ2, НЦ3, НЦ4 (насосы потребителей)
  #define pinDymosos ?            // Реле 3 - третье сверху - Дымосос 
  #define pinNasosKranKotel ?     // Реле 4 - нижнее - НЦ1, КЭ1 (насос и кран контура котла)
  #define pinZaslonkaDymohod ?    // Реле 4 нижний блок (нижнее)- МЗ(привод заслонки дымохода)  
  #define pinPowerServo ?         // Реле 3 нижний блок - питание Сервоприводов
  
  //--------DS18b20------------------
  #define pinDS2 ?  // Температура воды Котел подача  ДТ2
  #define pinDS3 ?  // Температура воды Котел обратка ДТ3
  #define pinDS4 ?  // Температура воды ТА Верхняя часть ДТ4
  #define pinDS5 ?  // Температура воды ТА Нижняя  часть ДТ5

#endif

#endif

#include <Arduino.h>
#include "display.h"
#include "boiler.h"
#include "U8glib.h"
#include "pins.h"

// Создаю объект для взаимодействия с дисплеем
U8GLIB_ST7920_128X64_1X u8g(pinU8SCK, pinU8MOSI, pinU8CS);

void display_init() {
  u8g.setRot180();
  u8g.setColorIndex(1); // pixel on
}


static void tempOutGraph(int sensor, int x, int y) {
  if (sensorOnline[sensor]) {
    u8g.setPrintPos(x, y);
    u8g.print(tempCels[sensor], 1);
  }
  else {
    u8g.drawStr(x + 7, y, "NC");
  }
}


// Графика дисплея
static void draw(void) // создаем функцию для отображения графики на дисплее
{
  u8g.setFont(u8g_font_freedoomr10r);
  //-------------------Котел Подача--------------
  u8g.drawFrame(0, 15, 33, 48); // прямоугольник корпуса котла
  tempOutGraph(Kotel_Vyhod, 3, 32); // Определяет положение индикации  ds2 "Температура воды Котел подача  ДТ2"
  u8g.drawVLine(25, 0, 15); // труба дымовая левая часть
  u8g.drawVLine(29, 0, 15); // труба дымовая правая часть
  if (getZaslonkaDymohod())
  {
    u8g.drawLine(24, 9, 30, 3);
  } // вывод изображения заслонки, если она включена (закрыта)

  //-------------------Аккумулятор Верх--------
  u8g.drawEllipse(67, 32, 4, 10, U8G_DRAW_UPPER_LEFT | U8G_DRAW_LOWER_LEFT);
  u8g.drawEllipse(110, 32, 4, 10);
  u8g.drawHLine(69, 21, 41); // верхняя линия
  u8g.drawHLine(69, 42, 41); // нижняя линия
  tempOutGraph(Verh_TA, 85, 20); // Определяет положение индикации  ds4 "Температура воды ТА Верхняя часть ДТ4"
  // (№ датчика темп.,x,y)
  //----------------Аккумулятор Низ----------
  tempOutGraph(Niz_TA, 85, 59); // Определяет положение индикации  ds5 "Температура воды ТА Нижняя  часть ДТ5"
  //--------------------Трубы-------------
  u8g.drawHLine(33, 17, 16); // выход котла
  u8g.drawHLine(33, 48, 16); // вход котла
  u8g.drawFrame(49, 0, 79, 64); // рамка СО
  u8g.drawVLine(78, 42, 22); // выход аккумулятора
  u8g.drawVLine(78, 2, 20); // вход аккумулятора
  u8g.drawDisc(126, 26, 3); // насос система
  u8g.drawDisc(49, 48, 3); // насос обратка
  //-------------
  tempOutGraph(Kotel_Obratka, 3, 62); // Определяет положение индикации  ds3  "Температура воды Котел обратка ДТ3"
  //--------------------------------------
  if (getNasosPotrebiteli()) // Если включен насос СО
  { // оператор (!) перд digitalRead обеспечивает правильное положенеи контактов рере соответствующее работе светодиода
    u8g.drawVLine(120, 25, 12); // стрелка после насоса системы (x,y,длина лин.)(119,37,12)
    u8g.drawLine(120, 39, 118, 34); // наконечник стрелки (Х,У,х-коца линии наконечника,у-конец лин. нак.) (119,49,117,47)
    u8g.drawLine(120, 39, 122, 34);
  }
  //---------------------------
  if (getNasosKranKotel()) // Если включены кран и насос Котла
  { // оператор (!) перд digitalRead обеспечивает правильное положенеи котактов рере соответствующее работе светодиода
    u8g.drawHLine(39, 21, 6);
    u8g.drawVLine(44, 21, 10); // обратка
    u8g.drawHLine(39, 31, 6);
    u8g.drawLine(39, 31, 41, 29);
    u8g.drawLine(39, 31, 41, 33);

    u8g.drawVLine(46, 3, 12); // выход в систему
    u8g.drawLine(46, 3, 44, 5);
    u8g.drawLine(46, 3, 48, 5);
    //------------
    u8g.drawHLine(54, 5, 11); // стрелка перед краном ТА
    u8g.drawLine(68, 5, 63, 3);
    u8g.drawLine(68, 5, 63, 7);
    //------------
    u8g.drawHLine(54, 58, 12); // стрелка на вход в котел (x,y,длина линии) drawHLine-горизонтальная
    u8g.drawLine(51, 58, 55, 56); // перед краном котла линия по 2-м точкам (х,у,х,у)
    u8g.drawLine(51, 58, 55, 60);
  }
  //-------------
  if (!getNasosKranKotel())// Kран котла закрыт (Рисуем крестик на трубе)
  {
    u8g.drawLine(40, 46, 36, 50); // кран котла 1-я линия (Х,У,х-коца линии,у-конца линии)
    u8g.drawLine(40, 50, 36, 46); // кран котла 2-я линия (Х,У,х-коца линии,у-конца линии)
  }
  //-------------
  if (getKranTA() && getNasosKranKotel()) // Если открыт кран ТА и включены кран и насос Котла
  { // рисуем Стрелку в ТА
    u8g.drawVLine(73, 6, 10); // стрелка ТА drawVLine-вертикальная
    u8g.drawLine(75, 13, 73, 18);
    u8g.drawLine(71, 13, 73, 18); // (Х,У,х-коца линии наконечника,у-конец лин. нак.)
  }
  if (getKranTA() && !getNasosKranKotel())// Если открыт кран ТА и вЫключены кран и насос Котл
  { // рисуем Стрелку выход из ТА
    u8g.drawVLine(73, 6, 10); // стрелка ТА drawVLine-вертикальная
    u8g.drawLine(73, 3, 71, 8);
    u8g.drawLine(73, 3, 75, 8); // (Х,У,х-коца линии наконечника,у-конец лин. нак.)
  }
  if (!getKranTA())// Если закрыт кран ТА
  {
    u8g.drawLine(80, 7, 76, 11); // кран ТА 1-я линия (Х,У,х-коца линии,у-конца линии)
    u8g.drawLine(76, 7, 80, 11); // кран ТА 2-я линия (Х,У,х-коца линии,у-конца линии)
  }
  //--------------------------------------
  u8g.setPrintPos(0, 12); // назначения места Вывода показаний датчика
  u8g.print((int)txaTemp); // температуры дыма
}
//-------конец функции дисплея----

void display_draw() {
  u8g.firstPage();
  do {
    draw();
  } while (u8g.nextPage());
}

#include "krest.h"

MyClass::MyClass(QWidget *wgt) :  QPushButton(wgt)
{
    this->setWindowTitle("MyWidget");
    this->resize(512, 512);
}

void MyClass::paintEvent(QPaintEvent *event)
{
    //for scale
    qreal a_a = qMin(this->height(), this->width());

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    //painter.translate(this->width() / 2, this->height() / 2);
    painter.scale(a_a / 512, a_a / 512);

    QPainterPath path1;
    QPolygon poly;

    //1
    poly << QPoint(171, 255);
    poly << QPoint(10, 94);
    poly << QPoint(9, 92);
    poly << QPoint(8, 92);
    poly << QPoint(7, 90);
    poly << QPoint(6, 88);
    poly << QPoint(5, 86);
    poly << QPoint(4, 84);
    poly << QPoint(3, 82);

    //2
    poly << QPoint(2, 79);
    poly << QPoint(1, 75);
    poly << QPoint(0, 66);
    poly << QPoint(1, 57);
    poly << QPoint(2, 53);
    poly << QPoint(3, 50);
    poly << QPoint(4, 48);
    poly << QPoint(5, 46);
    poly << QPoint(6, 44);
    poly << QPoint(7, 42);

    //3
    poly << QPoint(8, 41);
    poly << QPoint(9, 39);
    poly << QPoint(41, 8);
    poly << QPoint(42, 7);
    poly << QPoint(44, 6);
    poly << QPoint(50, 3);
    poly << QPoint(53, 2);
    poly << QPoint(57, 1);
    poly << QPoint(66, 0);

    //4
    poly << QPoint(75, 1);
    poly << QPoint(79, 2);
    poly << QPoint(82, 3);
    poly << QPoint(90, 7);
    poly << QPoint(255, 172);
    poly << QPoint(257, 172);
    poly << QPoint(418, 10);
    poly << QPoint(420, 9);

    //5
    poly << QPoint(421, 8);
    poly << QPoint(423, 7);
    poly << QPoint(430, 3);
    poly << QPoint(433, 2);
    poly << QPoint(437, 1);
    poly << QPoint(445, 0);
    poly << QPoint(455, 1);

    //6
    poly << QPoint(459, 2);
    poly << QPoint(462, 3);
    poly << QPoint(470, 7);
    poly << QPoint(471, 8);
    poly << QPoint(502, 38);
    poly << QPoint(503, 40);
    poly << QPoint(504, 41);

    //7
    poly << QPoint(505, 42);
    poly << QPoint(509, 50);
    poly << QPoint(510, 53);
    poly << QPoint(511, 57);
    poly << QPoint(512, 66);
    poly << QPoint(511, 75);
    poly << QPoint(510, 79);

    //8
    poly << QPoint(509, 82);
    poly << QPoint(505, 90);
    poly << QPoint(341, 255);
    poly << QPoint(341, 257);
    poly << QPoint(502, 418);
    poly << QPoint(503, 420);

    //9
    poly << QPoint(504, 421);
    poly << QPoint(505, 422);
    poly << QPoint(509, 430);
    poly << QPoint(510, 433);
    poly << QPoint(511, 437);
    poly << QPoint(512, 446);

    //10
    poly << QPoint(511, 455);
    poly << QPoint(510, 459);
    poly << QPoint(509, 462);
    poly << QPoint(505, 470);
    poly << QPoint(507, 473);
    poly << QPoint(473, 503);

    //11
    poly << QPoint(471, 504);
    poly << QPoint(470, 505);
    poly << QPoint(462, 509);
    poly << QPoint(459, 510);
    poly << QPoint(455, 511);
    poly << QPoint(447, 512);

    //12
    poly << QPoint(437, 511);
    poly << QPoint(533, 510);
    poly << QPoint(430, 509);
    poly << QPoint(422, 505);
    poly << QPoint(257, 341);
    poly << QPoint(255, 341);

    //13
    poly << QPoint(94, 502);
    poly << QPoint(92, 503);
    poly << QPoint(90, 505);
    poly << QPoint(88, 506);
    poly << QPoint(86, 507);
    poly << QPoint(82, 509);
    poly << QPoint(79, 510);

    //14
    poly << QPoint(75, 511);
    poly << QPoint(68, 512);
    poly << QPoint(57, 511);
    poly << QPoint(53, 510);
    poly << QPoint(50, 509);
    poly << QPoint(42, 505);
    poly << QPoint(40, 503);

    //15
    poly << QPoint(38, 502);
    poly << QPoint(9, 473);
    poly << QPoint(8, 471);
    poly << QPoint(7, 470);
    poly << QPoint(3, 462);
    poly << QPoint(2, 459);
    poly << QPoint(1, 455);

    //16
    poly << QPoint(0, 447);
    poly << QPoint(1, 437);
    poly << QPoint(2, 433);
    poly << QPoint(3, 430);
    poly << QPoint(7, 422);
    poly << QPoint(9, 420);
    poly << QPoint(10, 418);
    poly << QPoint(171, 257);

    //17
    poly << QPoint(171, 255);



    path1.addPolygon(poly);


    painter.setPen(QColor("#ffffff"));
    painter.setBrush(QBrush("#ffffff"));
    painter.drawPath(path1);
}

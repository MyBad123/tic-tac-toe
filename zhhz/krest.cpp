#include "krest.h"

Krest::Krest(QWidget *wgt) : QWidget(wgt)
{

}

void Krest::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    this->doDraw();
}

void Krest::doDraw()
{
    QPainter paint(this);
    QPainterPath path1;

    //for window
    paint.setWindow(0, 0, 60, 60);
    paint.setRenderHint(QPainter::Antialiasing);

    //it is poligon
    QPolygon poly;
    poly << QPoint(9, 1);
    poly << QPoint(4, 1);
    poly << QPoint(1, 5);
    poly << QPoint(1, 9);
    poly << QPoint(17, 25);
    poly << QPoint(1, 41);
    poly << QPoint(1, 45);
    poly << QPoint(5, 50);
    poly << QPoint(9, 50);
    poly << QPoint(25, 34);
    poly << QPoint(42, 50);
    poly << QPoint(46, 50);
    poly << QPoint(50, 46);
    poly << QPoint(50, 42);
    poly << QPoint(34, 25);
    poly << QPoint(50, 9);
    poly << QPoint(50, 5);
    poly << QPoint(45, 1);
    poly << QPoint(42, 1);
    poly << QPoint(25, 17);
    poly << QPoint(9, 1);





    QPainterPath path;
    path.addPolygon(poly);

    paint.fillPath(path, QBrush(QColor(Qt::black)));


}

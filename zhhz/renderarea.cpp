#include "renderarea.h"

MyButton::MyButton(QColor &color, QColor &txt, QWidget *wgt) : QWidget(wgt)
{
    this->color = color;
    this->colorForText = txt;

    this->resize(30, 20);


    //from book
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
}

QSize MyButton::sizeHint() const
{
    return QSize(30, 20);
}

void MyButton::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    paint.setPen(this->color);
    paint.setRenderHint(QPainter::Antialiasing);
    paint.scale(this->width() / 30, this->height() / 20);

    //colors
    paint.setPen(color);
    paint.setBrush(QBrush(color));

    paint.drawRoundRect(1, 1, 29, 19, 10, 10);
}

#include "null.h"



Null::Null(QColor &color1, QColor &color2, QWidget *wgt) : QWidget(wgt)
{
    this->m_color1 = color1;
    this->m_color2 = color2;

    //for size
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
}

QSize Null::sizeHint() const
{
    return QSize(100, 100);
}

void Null::paintEvent(QPaintEvent *event)
{
    //for1
    QPainter paint(this);
    paint.setPen(m_color1);
    paint.setBrush(m_color1);

    //fxaa
    paint.setRenderHint(QPainter::Antialiasing);

    paint.drawEllipse(QPoint(this->width() / 2, this->height() / 2), width() / 2 - 20, height() / 2 - 20);

    //for2
    paint.setPen(m_color2);
    paint.setBrush(m_color2);

    paint.drawEllipse(QPoint(this->width() / 2, this->height() / 2), width() / 2 - 30, height() / 2 - 30);

    //paint.drawEllipse()
}












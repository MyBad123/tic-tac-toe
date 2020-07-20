#include "formforclick.h"

FormForClick::FormForClick(QWidget *wgt) : QWidget(wgt)
{
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    this->m_color = new QColor("#71c7ab");
}

QSize FormForClick::sizeHint() const
{
    return QSize(100, 100);
}

void FormForClick::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    paint.setPen(*m_color);
    paint.setBrush(*m_color);

    //fxaa
    paint.setRenderHint(QPainter::Antialiasing);

    paint.drawRoundRect(1, 1, this->width() - 1, this->height() - 1, 10, 10);
}



#include "buttonfortext.h"

buttonForText::buttonForText(QString& str, QWidget *wht) : QWidget(wht)
{
    this->lbl = new QLabel(str, this);

    QGridLayout* lg = new QGridLayout(this);
    lg->addWidget(lbl);

    //style for text
    lbl->setNum(20);
    lbl->setAlignment(Qt::AlignCenter);


    //for resize
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
}

QSize buttonForText::sizeHint() const
{
    return QSize(400, 300);
}

void buttonForText::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);

    //color
    paint.setBrush(QBrush("#71c7ab"));
    paint.setPen(QColor("#71c7ab"));

    paint.setRenderHint(QPainter::Antialiasing);

    paint.drawRoundRect(1, 1, this->width() - 1, this->height() - 1, 10, 10);
}

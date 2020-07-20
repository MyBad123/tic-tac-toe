#ifndef WIDGET_H
#define WIDGET_H

#include "tringle.h"
#include <QWidget>
#include <QGraphicsScene>

class widget : public QWidget
{
    Q_OBJECT
public:
    explicit widget(QWidget* wgt = nullptr);


    Tringle* tringle;
    QGraphicsScene* scene;
};

#endif // WIDGET_H

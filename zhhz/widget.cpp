#include "widget.h"

//for graphics
#include <QGraphicsView>

widget::widget(QWidget* wgt)
{
    this->resize(600, 600);

    scene = new QGraphicsScene();
    tringle = new Tringle();

    QGraphicsView* graphicsView = new QGraphicsView();
    graphicsView->setScene(scene);

}

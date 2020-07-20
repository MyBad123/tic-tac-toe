#ifndef FROMVIDEO_H
#define FROMVIDEO_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItemGroup>
#include <QGraphicsItem>
#include <QPen>
#include <QBrush>
#include <QGridLayout>

class FromVideo : public QWidget
{
    Q_OBJECT
public:
    FromVideo(QWidget* wgt = nullptr);
private:
    QGridLayout* grid;

};


class GraphicsScene : public QGraphicsView {
public:
    GraphicsScene(QWidget* wgt = nullptr);
    ~GraphicsScene();
private:
    QGraphicsScene *scene;
    QGraphicsItemGroup *itemgroup1;
    QGraphicsItemGroup *itemgroup2;
    QGraphicsItemGroup *itemgroup3;
    QGraphicsItemGroup *itemgroup4;

    QGraphicsItem *itemelementline;
    QGraphicsItem *itemelementcube;

    QPen *bluePen;
    QPen *redPen();
    QPen *yellowPen();

    QBrush *greenBrush;
    QBrush *magentaBrush;
    QBrush *cyanBrush;
};

#endif // FROMVIDEO_H

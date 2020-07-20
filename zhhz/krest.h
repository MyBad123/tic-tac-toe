#ifndef KREST_H
#define KREST_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QGridLayout>

class Krest : public QWidget
{
public:
    Krest(QWidget *wgt = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    void doDraw();
};

#endif // KREST_H

#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QPainter>
#include <QLabel>

class MyButton : public QWidget {
    Q_OBJECT
public:
    MyButton(QColor& color, QColor& txt, QWidget* wgt = nullptr);
    QSize sizeHint() const override;
private:
    //for draw
    QColor color;
    QColor colorForText;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // RENDERAREA_H

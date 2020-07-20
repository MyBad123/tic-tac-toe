#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>
#include <QPainter>
#include <QLabel>

class MyClass : public QWidget {
    Q_OBJECT
public:
    MyClass(QWidget* wgt = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYCLASS_H

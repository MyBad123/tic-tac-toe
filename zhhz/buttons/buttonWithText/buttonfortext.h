#ifndef BUTTONFORTEXT_H
#define BUTTONFORTEXT_H

#include <QWidget>
#include <QPainter>
#include <QLabel>
#include <QGridLayout>

class buttonForText : public QWidget
{
public:
    buttonForText(QString& str, QWidget* wht = nullptr);
    QSize sizeHint() const override;
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    QLabel* lbl;
};

#endif // BUTTONFORTEXT_H

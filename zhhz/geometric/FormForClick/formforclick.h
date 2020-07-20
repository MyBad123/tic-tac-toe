#ifndef FORMFORCLICK_H
#define FORMFORCLICK_H

#include <QWidget>
#include <QPainter>

class FormForClick : public QWidget
{
public:
    FormForClick(QWidget* wgt = nullptr);
    QSize sizeHint() const override;
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    QColor* m_color;
};

#endif // FORMFORCLICK_H

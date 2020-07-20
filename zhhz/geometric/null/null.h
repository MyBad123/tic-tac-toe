#ifndef NULL_H
#define NULL_H

#include <QWidget>
#include <QPainter>

class Null : public QWidget
{
public:
    Null(QColor& color1, QColor& color2, QWidget* wgt = nullptr);
    virtual QSize sizeHint() const override;
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    QColor m_color1;
    QColor m_color2;
};


#endif // NULL_H

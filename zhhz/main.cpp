#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include "buttons/buttonWithText/buttonfortext.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    QWidget wgt;
    QColor color("#faad26");
    QColor color1("#ffffff");

    QString txt("новая игра");

    QGridLayout* lg = new QGridLayout(&wgt);
    lg->addWidget(new buttonForText(txt), 0, 0);


    wgt.show();



    return app.exec();
}


/*#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QSplitter>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget wgt;
    QGridLayout* lg = new QGridLayout(&wgt);

    //widget for buttons
    QWidget* bwgt = new QWidget;
    QPushButton pb1("hzhz", &wgt);
    QPushButton pb2("hzhz", &wgt);

    //size for buttons
    pb1.resize(40, 20);
    pb2.resize(40, 20);

    //move for buttons
    pb1.move(10, 10);
    pb2.move(10, 40);
    bwgt->setMinimumSize(50, 100);

    //color for bwgt
    bwgt->setPalette(QPalette(QColor("#ffffff")));

    lg->addWidget(bwgt, 0, 0, 1, 2);

    //wgt9
    QWidget wgt9;
    QGridLayout* lg9 = new QGridLayout(&wgt9);

    //buttons for wgt9
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            lg9->addWidget(new QPushButton("hzhz"), i, j);


    wgt9.setMinimumSize(200, 200);
    lg->addWidget(&wgt9, 0, 1, 2, 2);

    //margin
    lg->setMargin(40);

    //close
    lg->addWidget(new QPushButton("close"), 0, 3);
    lg->addWidget(new QSplitter(Qt::Horizontal), 0, 2);
    lg->addWidget(new QSplitter(Qt::Vertical), 1, 3);

    wgt.setLayout(lg);
    wgt.show();

    return app.exec();
}
*/

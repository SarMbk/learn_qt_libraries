#include "widget.h"
#include <QPushButton>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QFont buttonFont ("Times", 20, QFont::Bold);
    QPushButton *button1 = new QPushButton("Button1", this);
    button1->setMinimumSize(200,100);
    button1->setFont(buttonFont);
    connect(button1, &QPushButton::clicked, [=](){
        qDebug() << "Button Clicked";
    });


    QPushButton *button2 = new QPushButton("Button2", this);
    button2->setMinimumSize(200,100);
    button2->setFont(buttonFont);
    button2->move(205,0);
    connect(button2, &QPushButton::pressed, [=](){
        qDebug() << "Button Pressed";
    });
    connect(button2, &QPushButton::released, [=](){
        qDebug() << "Button Released";
    });
}

Widget::~Widget()
{
}


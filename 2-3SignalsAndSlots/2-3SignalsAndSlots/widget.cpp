#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // String notation
    // This means: when you have your push button clicked, you connect the changeText slot inside this ui. i.e.
    // connect (object that you are getting signals from, specify signal you are trying to capture, specify object affected by the signal, specify
    // the method you want to use on that object)
    // ui->pushbutton is signal sender
    // SIGNAL(clicked()) is signal
    // this is receiver
    // SLOT(changeText()) is method
    //connect( ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()) );


    // Functor notation using regular slots
    //connect(ui->pushButton, &QPushButton::clicked, this,  &Widget::changeText);

    //Functor notation using lamda function
    connect(ui->pushButton, &QPushButton::clicked, [=](){
        ui->label->setText("Click event handled using lamda function");
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText(){
    qDebug() << "User clicked on button";
    ui->label->setText("You just clicked the button");
}


// String notation of handling signals


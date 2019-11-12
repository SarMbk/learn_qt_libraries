#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Code up the layout
    /*
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(ui->pushButton1);
    layout->addWidget(ui->pushButton2);
    layout->addWidget(ui->pushButton3);
    layout->addWidget(ui->pushButton4);
    layout->addWidget(ui->pushButton5);
    setLayout(layout);
    */




}

Widget::~Widget()
{
    delete ui;
}


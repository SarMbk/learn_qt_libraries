#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Add image to imagelabel
    QPixmap flowerPixmap("://download.jpg");
    ui->imageLabel->setPixmap(flowerPixmap);
}

Widget::~Widget()
{
    delete ui;
}


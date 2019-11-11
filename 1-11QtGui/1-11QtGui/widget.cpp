#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_hello_clicked()
{
    qDebug() << "User clicked on a button";
    QMessageBox::information(this, "Message", "You clicked on the button, so hello", QMessageBox::Ok);

}

void Widget::on_howAreYou_clicked()
{
    qDebug() << "User clicked on a button";
    QMessageBox::information(this, "Message", "You clicked on the button, so how are you?", QMessageBox::Ok);
}




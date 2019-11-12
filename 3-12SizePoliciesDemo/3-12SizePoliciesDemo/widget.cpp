#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(ui->pushButton4, 0, 0);
    layout->addWidget(ui->pushButton5, 0, 1);
    layout->addWidget(ui->pushButton6, 0, 2);
    layout->addWidget(ui->pushButton7, 1, 0);
    layout->addWidget(ui->pushButton8, 1, 1);
    layout->addWidget(ui->pushButton9, 1, 2);
    */

}

Widget::~Widget()
{
    delete ui;
}


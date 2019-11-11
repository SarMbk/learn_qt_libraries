#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Connect slider to progress bar using regular slots <- I prefer this one
    connect(ui->horizontalSlider, &QSlider::valueChanged, this, &Widget::connectBarToSlider);

    // Connect slider to progress bar using string notation
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(connectBarToSlider()) );

    // Connect slider to progress bar completely bypassing the connectBarToSlider slot
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)) ) ;

    // Connect slider to progress bar using regular slots and not using the connect bar to slider function
    //connect(ui->horizontalSlider, &QSlider::valueChanged, ui->progressBar, &QProgressBar::setValue);

    // Connect using functors with lamda
//    connect(ui->horizontalSlider, &QSlider::valueChanged, [=](){
//        ui->progressBar->setValue(ui->horizontalSlider->value());
//    });


}

Widget::~Widget()
{
    delete ui;
}

void Widget::connectBarToSlider()
{
    qDebug() << "Slider was moved ";
    ui->progressBar->setValue(ui->horizontalSlider->value());
}




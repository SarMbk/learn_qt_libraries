#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Initialize random number generator
    srand(time(NULL));

    // Generate random number
    sectetNum = rand() % 10 +1;
    qDebug() << "Random number was generated" << QString::number(sectetNum);
    ui->restartButton->setDisabled(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    guessNum = ui->guessNumSpinBox->value();
    qDebug() << "User guessed a number" << QString::number(guessNum);

    if (guessNum==sectetNum){
        // Show a congratulations message
        ui->messageLabel->setText("Congratulations! You have guessed the secret number!");

        // Disable guess button
        ui->guessButton->setDisabled(true);
    }
    else {
        if (sectetNum < guessNum){
            ui->messageLabel->setText("number is lower than your guess");
        }
        else if (sectetNum > guessNum){
            ui->messageLabel->setText("number is higher than your guess");
        }
    }
}

void Widget::on_restartButton_clicked()
{
    sectetNum = rand() % 10 + 1;
    qDebug() << "Random number was generated" << QString::number(sectetNum);
    ui->messageLabel->setText("Set a number and hit guess");
    ui->guessButton->setDisabled(false);
    ui->guessNumSpinBox->setValue(1);
}

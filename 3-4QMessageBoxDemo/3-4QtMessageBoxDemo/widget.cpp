#include "widget.h"
#include <QPushButton>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <QSpacerItem>
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton("Click me", this);
    button->setGeometry(200, 200, 100, 50);
    connect(button, &QPushButton::clicked, this, &Widget::handleClickEvent);
}

Widget::~Widget()
{
}


// Handle click event with the q message box manually
/*
void Widget::handleClickEvent(){
    QMessageBox messageBox;
    messageBox.setWindowTitle("Message box title");
    messageBox.setText("Message box text");
    messageBox.setInformativeText("Message box informative text");
    messageBox.setIcon(QMessageBox::Critical);
    messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    messageBox.setDefaultButton(QMessageBox::Cancel);

    QSpacerItem* spacer = new QSpacerItem(300,1,QSizePolicy::Minimum, QSizePolicy::Minimum);
    QGridLayout* layout = (QGridLayout*)messageBox.layout();
    layout->addItem(spacer, layout->rowCount(), 0, 0, layout->columnCount());

    int returnValue = messageBox.exec();

    if (returnValue == QMessageBox::Ok){
        qDebug() << "User clicked OK";
    }
    else if (returnValue == QMessageBox::Cancel){
        qDebug() << "User clicked Cancel";
    }
}
*/

// For more info see QMessageBox in help section
void Widget:: handleClickEvent(){
    // Critical message
    // int returnValue = QMessageBox::critical(this, "Message Title", "Message Text", QMessageBox::Ok | QMessageBox::Cancel);

    // Information message
    //int returnValue = QMessageBox::information(this, "Infomessage title", "Infomessage text", QMessageBox::Ok | QMessageBox::Cancel);

    // Question message
    //int returnValue = QMessageBox::question(this, "Question message title", "Question message text", QMessageBox::Ok | QMessageBox::Cancel);

    // Warning message
    int returnValue = QMessageBox::warning(this, "Warning message title", "Warning message text", QMessageBox::Ok | QMessageBox:: Cancel);

    if (returnValue == QMessageBox::Ok){
        qDebug() << "User clicked OK";
    }
    else if (returnValue == QMessageBox::Cancel){
        qDebug() << "User clicked Cancel";
    }
}

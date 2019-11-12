#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setMinimumSize(400,150);
    this->setWindowTitle("Please enter your information");
    QLabel *firstName = new QLabel("First Name :", this);
    QLabel *lastName = new QLabel("Last Name :", this);
    QLabel *city = new QLabel("City :", this);

    firstName->move(20, 20);
    lastName->move(20, 50);
    city->move(20, 80);

    QLineEdit *firstNameEdit = new QLineEdit(this);
    QLineEdit *lastNameEdit = new QLineEdit(this);
    QLineEdit *cityEdit = new QLineEdit(this);

    firstNameEdit->setMinimumWidth(250);
    lastNameEdit->setMinimumWidth(250);
    cityEdit->setMinimumWidth(250);

    firstNameEdit->move(100, 20);
    lastNameEdit->move(100, 50);
    cityEdit->move(100, 80);

    QPushButton *grabData = new QPushButton("Grab Data", this);
    grabData->setGeometry(150, 120, 100, 40);
    connect(grabData, &QPushButton::clicked, [=](){
       QString firstName = firstNameEdit->text();
       QString lastName = lastNameEdit->text();
       QString city = cityEdit->text();

       if (!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty()){
           qDebug() << "Data saved" << "\nFirst name: " << firstName << "\nLast name: " << lastName << "\nCity: " << city;
       } else{
           qDebug() << "One or more fields is empty";
       }
    });


    // Respond to signals from QLineEdits

    // Track cursor position
    connect(firstNameEdit, &QLineEdit::cursorPositionChanged, [=](){
        qDebug() << "Current cursor position :" << firstNameEdit->cursorPosition();
    });

    // Editing finished signal
    connect(firstNameEdit, &QLineEdit::editingFinished, [=](){
        qDebug() << "First name editing complete";
    });

    // Return pressed signal
    connect(firstNameEdit, &QLineEdit::returnPressed, [=](){
        qDebug() << "Return Pressed";
    });

    // Selection changed
    connect(firstNameEdit, &QLineEdit::selectionChanged, [=](){
        qDebug() << "Selection Changed";
    });

    // Text changed
    connect(firstNameEdit, &QLineEdit::textChanged, [=](){
        qDebug() << "Text just changed to: " << firstNameEdit->text();
    });

    // Text edited
    connect(firstNameEdit, &QLineEdit::textEdited, [=](){
        qDebug() << "Text just edited to: " << firstNameEdit->text();
    });

    // Hint text
    firstNameEdit->setPlaceholderText("First Name");
    lastNameEdit->setPlaceholderText("Last Name");
    cityEdit->setPlaceholderText("City");

}

Widget::~Widget()
{
}


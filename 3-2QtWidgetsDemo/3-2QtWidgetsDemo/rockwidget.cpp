#include "rockwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("This is how to set window title");
    this->resize(600, 600);

    // Add label to your main window
    QLabel *label = new QLabel("this is how you add a label",this);
    QFont times("Times", 14, QFont::Cursive, QFont::System);
    QPalette styledLabelPallete;
    styledLabelPallete.setColor(QPalette::Window, Qt::green);
    styledLabelPallete.setColor(QPalette::WindowText, Qt::white);


    // Add a styled widget and move it around
    QLabel *styledLabel = new QLabel(this);
    styledLabel->setText("my colored label");
    styledLabel->move(50,50);
    styledLabel->setFont(times);
    styledLabel->setAutoFillBackground(true);
    styledLabel->setPalette(styledLabelPallete);


    //Add button and connect to slot
    QPushButton *button  = new QPushButton(this);
    button->setText("click me");
    button->setGeometry(200,200,100,50);

    //Connect button click to the slot
    connect(button, &QPushButton::clicked, this, &RockWidget::handleButtonClick);

}


void RockWidget::handleButtonClick(){
    QMessageBox::information(this, "message", "you clicked on button");
}

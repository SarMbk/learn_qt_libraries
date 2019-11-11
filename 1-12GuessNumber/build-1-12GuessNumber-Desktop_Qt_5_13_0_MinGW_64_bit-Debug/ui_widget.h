/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *guessNumber;
    QSpinBox *guessNumSpinBox;
    QPushButton *guessButton;
    QPushButton *restartButton;
    QLabel *messageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(769, 417);
        guessNumber = new QLabel(Widget);
        guessNumber->setObjectName(QString::fromUtf8("guessNumber"));
        guessNumber->setGeometry(QRect(270, 170, 191, 31));
        QFont font;
        font.setPointSize(14);
        guessNumber->setFont(font);
        guessNumSpinBox = new QSpinBox(Widget);
        guessNumSpinBox->setObjectName(QString::fromUtf8("guessNumSpinBox"));
        guessNumSpinBox->setGeometry(QRect(240, 240, 42, 22));
        guessNumSpinBox->setMinimum(1);
        guessNumSpinBox->setMaximum(10);
        guessButton = new QPushButton(Widget);
        guessButton->setObjectName(QString::fromUtf8("guessButton"));
        guessButton->setGeometry(QRect(310, 240, 93, 28));
        restartButton = new QPushButton(Widget);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(420, 240, 93, 28));
        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(50, 280, 691, 61));
        QFont font1;
        font1.setPointSize(16);
        messageLabel->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        guessNumber->setText(QCoreApplication::translate("Widget", "Guess my number", nullptr));
        guessButton->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        restartButton->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        messageLabel->setText(QCoreApplication::translate("Widget", "Set a number and hit guess", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lastNameLabel;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *messageLabel;
    QTextEdit *messageTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(837, 566);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNameLabel = new QLabel(Widget);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));

        horizontalLayout->addWidget(firstNameLabel);

        firstNameLineEdit = new QLineEdit(Widget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        horizontalLayout->addWidget(firstNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lastNameLabel = new QLabel(Widget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

        horizontalLayout_2->addWidget(lastNameLabel);

        lastNameLineEdit = new QLineEdit(Widget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        horizontalLayout_2->addWidget(lastNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));

        horizontalLayout_3->addWidget(messageLabel);

        messageTextEdit = new QTextEdit(Widget);
        messageTextEdit->setObjectName(QString::fromUtf8("messageTextEdit"));

        horizontalLayout_3->addWidget(messageTextEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("Widget", "First Name:", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("Widget", "Last Name:", nullptr));
        messageLabel->setText(QCoreApplication::translate("Widget", "Message:", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

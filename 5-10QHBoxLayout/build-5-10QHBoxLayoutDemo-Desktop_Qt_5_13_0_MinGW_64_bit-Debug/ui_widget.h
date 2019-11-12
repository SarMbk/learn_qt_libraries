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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(811, 612);
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        horizontalLayout->addWidget(pushButton1);

        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        horizontalLayout->addWidget(pushButton2);

        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        horizontalLayout->addWidget(pushButton3);

        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        horizontalLayout->addWidget(pushButton4);

        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        horizontalLayout->addWidget(pushButton5);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton1->setText(QCoreApplication::translate("Widget", "One", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        pushButton5->setText(QCoreApplication::translate("Widget", "Five", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton4;
    QPushButton *pushButton9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(678, 490);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton1 = new QPushButton(groupBox_2);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton1);

        pushButton2 = new QPushButton(groupBox_2);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton2);

        pushButton3 = new QPushButton(groupBox_2);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        sizePolicy1.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton5 = new QPushButton(groupBox);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        sizePolicy1.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton5, 0, 1, 1, 1);

        pushButton6 = new QPushButton(groupBox);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        sizePolicy1.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton6, 0, 2, 1, 1);

        pushButton4 = new QPushButton(groupBox);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        sizePolicy1.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton4, 0, 0, 1, 1);

        pushButton9 = new QPushButton(groupBox);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        sizePolicy1.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        pushButton7 = new QPushButton(groupBox);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        sizePolicy1.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton8 = new QPushButton(groupBox);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        sizePolicy1.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 373, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        groupBox_2->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        groupBox->setTitle(QString());
        pushButton5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Widget", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

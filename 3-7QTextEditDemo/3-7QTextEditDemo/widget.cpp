#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(400,400);

    QFont labelFont("Times", 10, QFont::Bold);
    QLabel *mLabel = new QLabel("This is my text", this);
    mLabel->setFont(labelFont);
    mLabel->move(100, 25);

    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->move(70, 55);

    connect(textEdit, &QTextEdit::textChanged, [=](){
        qDebug() << "text changed";
    });

    // Copy button
    QPushButton *copyButton = new QPushButton("Copy", this);
    copyButton->setMinimumSize(50,25);
    copyButton->move(10, 250);
    connect(copyButton, &QPushButton::clicked, [=](){
        textEdit->copy();
    });

    // Cut button
    QPushButton *cutButton = new QPushButton("Cut", this);
    cutButton->setMinimumSize(50,25);
    cutButton->move(110, 250);
    connect(cutButton, &QPushButton::clicked, [=](){
        textEdit->cut();
    });


    //Paste button
    QPushButton *pasteButton = new QPushButton("Paste", this);
    pasteButton->setMinimumSize(50,25);
    pasteButton->move(210, 250);
    connect(pasteButton, &QPushButton::clicked, [=](){
        textEdit->paste();
    });


    //Undo button
    QPushButton *undoButton = new QPushButton("Undo", this);
    undoButton->setMinimumSize(50,25);
    undoButton->move(10, 280);
    connect(undoButton, &QPushButton::clicked, [=](){
        textEdit->undo();
    });

    //Redo button
    QPushButton *redoButton = new QPushButton("Redo", this);
    redoButton->setMinimumSize(50,25);
    redoButton->move(110, 280);
    connect(redoButton, &QPushButton::clicked, [=](){
        textEdit->redo();
    });

    QPushButton *clearButton = new QPushButton("Clear", this);
    clearButton->setMinimumSize(50,25);
    clearButton->move(210, 280);
    connect(clearButton, &QPushButton::clicked, [=](){
        textEdit->clear();
    });


    //Plain text button
    QPushButton *plainTxtButton = new QPushButton("Plain Text", this);
    plainTxtButton->setMinimumSize(50,25);
    plainTxtButton->move(10, 310);
    connect(plainTxtButton, &QPushButton::clicked, [=](){
        textEdit->setPlainText("abcdefg");
    });

    //Html button
    QPushButton *htmlButton = new QPushButton("Html", this);
    htmlButton->setMinimumSize(50,25);
    htmlButton->move(110, 310);
    connect(htmlButton, &QPushButton::clicked, [=](){
        textEdit->setHtml(" ");
    });

    // Grab text
    QPushButton *grabButton = new QPushButton("Grab Text", this);
    grabButton->setMinimumSize(50,25);
    grabButton->move(210, 310);
    connect(grabButton, &QPushButton::clicked, [=](){
        qDebug() << "Text inside is: " << textEdit->toPlainText();
    });

    // Grab html
    QPushButton *grabHtmlButton = new QPushButton("Grab Html", this);
    grabHtmlButton->setMinimumSize(50,25);
    grabHtmlButton->move(210, 310);
    connect(grabHtmlButton, &QPushButton::clicked, [=](){
        qDebug() << "Html inside is: " << textEdit->toHtml();
    });

}

Widget::~Widget()
{
}


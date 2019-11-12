#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void handleClickEvent();

};
#endif // WIDGET_H

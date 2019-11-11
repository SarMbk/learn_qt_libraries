#ifndef ROCKWIDGER_H
#define ROCKWIDGER_H

#include <QObject>
#include <QWidget>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void handleButtonClick();
};

#endif // ROCKWIDGER_H

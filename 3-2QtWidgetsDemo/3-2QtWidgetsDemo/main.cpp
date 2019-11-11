#include <QApplication>
#include "rockwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create your widget (that is your application window) and display it
    RockWidget w;
    w.show();



    return a.exec();
}

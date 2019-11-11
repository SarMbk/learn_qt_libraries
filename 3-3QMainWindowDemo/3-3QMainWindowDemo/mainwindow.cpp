#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(400,400);
    this->setWindowTitle("This is a main window application title");

    //Add huge button in the middle of window
    QPushButton *button = new QPushButton("Hello", this);
    setCentralWidget(button);

    // Declare quit action and connect to slot
    QAction *quitAction = new QAction("Quit");
    connect(quitAction, &QAction::triggered, this, &QApplication::quit);

    // Add menus
    QMenu *filemenu = menuBar()->addMenu("File");
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    // Add quit action to file menu
    filemenu->addAction(quitAction);

    // Add status bar message uploading file for 3 seconds
    statusBar()->showMessage("Uploading file", 3000);
}

MainWindow::~MainWindow()
{
}


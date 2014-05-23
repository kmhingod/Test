#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
 This is a mainwindow.cpp file
 I can do it!!!
*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

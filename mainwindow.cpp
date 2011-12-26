#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //YEAH! VERY GOOD
    //BARADA
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //YEAH! VERY GOOD
    // for Zhenya
    // chto-to
}

MainWindow::~MainWindow()
{
    delete ui;
}

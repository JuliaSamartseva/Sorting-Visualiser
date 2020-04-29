#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->painterLayout->addWidget(&paintwidget);
    paintwidget.update();
}

MainWindow::~MainWindow()
{
    delete ui;
}


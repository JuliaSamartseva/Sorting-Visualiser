#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sortingalgorithms.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    animation = new SortingAnimation(this);
    controller = new Controller();
    controller->setAnimation(animation);
    ui->painterLayout->addWidget(controller->getPaintWidget());

    connect(animation, SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
            controller, SLOT(onNumbersChanged(std::vector<int>, std::vector<int>)));


    connect(ui->chooseAlgorithm, SIGNAL(currentTextChanged(QString)),
            controller, SLOT(setSortingStrategyQString(QString)));

    controller->generateNumbers(200);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_generateArray_clicked()
{
    controller->generateNumbers(200);
}

void MainWindow::on_startSort_clicked()
{
    controller->startSorting();
}

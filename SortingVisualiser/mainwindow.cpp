#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sortingalgorithms.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->painterLayout->addWidget(&paintwidget);
    animation = new SortingAnimation(this);

    connect(animation, SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
            this, SLOT(onNumbersChanged(std::vector<int>, std::vector<int>)));


    //connect(ui->chooseAlgorithm, SIGNAL(currentTextChanged(QString)),
    //        controller, SLOT(setSortingStrategyQString(QString)));

    animation->generateNumbers(100);
    paintwidget.update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumbersChanged(std::vector<int> numbers, std::vector<int> indices)
{
    paintwidget.setPaintData(numbers, indices);
    paintwidget.update();
}


void MainWindow::on_generateArray_clicked()
{
    animation->generateNumbers(100);
    paintwidget.update();
}

void MainWindow::on_startSort_clicked()
{
    paintwidget.setAnimation(true);
    controller->startSorting();
}

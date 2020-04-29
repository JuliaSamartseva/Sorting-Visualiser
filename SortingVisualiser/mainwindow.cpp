#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sortingalgorithms.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->painterLayout->addWidget(&paintwidget);
    sAnimation = new SortingAnimation(this);

    connect(sAnimation, SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
            this, SLOT(onNumbersChanged(std::vector<int>, std::vector<int>)));

    sAnimation->generateNumbers(100);
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


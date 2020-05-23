#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sortingalgorithms.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    animation = new SortingAnimation(this);
    controller = new Controller();
    controller->setAnimation(animation);
    ui->painterLayout->addWidget(controller->getPaintWidget());

    connect(animation, SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
            controller, SLOT(onNumbersChanged(std::vector<int>, std::vector<int>)));


    connect(ui->chooseAlgorithm, SIGNAL(currentTextChanged(QString)),
            controller, SLOT(setSortingStrategyQString(QString)));

    controller->generateNumbers(ui->arraySize->value());
    controller->changeAnimationSpeed(ui->sortSpeed->value());

    setMinimumSize(1250,750);
    resize(1250,750);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_generateArray_clicked()
{
    controller->generateNumbers(ui->arraySize->value());
}

void MainWindow::on_startSort_clicked()
{
    controller->startSorting();
}

void MainWindow::on_arraySize_valueChanged(int value)
{
    controller->changeArraySize(value);
}

void MainWindow::on_sortSpeed_valueChanged(int value)
{
    controller->changeAnimationSpeed(value);
}

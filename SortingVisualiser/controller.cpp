#include "controller.h"
#include <QDebug>

void Controller::generateNumbers(int number)
{
    animation->generateNumbers(number);
    paintwidget.update();
}

void Controller::setAnimation(SortingAnimation *value)
{
    animation = value;
}

Controller::Controller()
{
    this->sorting = new SortingContext();
    this->sorting->setStrategy(new QuickSort());
}

Controller::Controller(SortingAnimation *animation)
{
    this->animation = animation;
    this->sorting->setStrategy(new QuickSort());
}

void Controller::setSortingStrategy(std::string strategy)
{
    if (strategy == "Quick sort")
        sorting->setStrategy(new QuickSort());
    else if (strategy == "Merge sort")
        sorting->setStrategy(new MergeSort());
    else if (strategy == "Insertion sort")
        sorting->setStrategy(new InsertionSort());
    else if (strategy == "Selection sort")
        sorting->setStrategy(new SelectionSort());
    else sorting->setStrategy(new CocktailSort());
}

void Controller::startSorting()
{
    paintwidget.setAnimation(true);
    animation->setSortingStrategy(sorting);
    connect(sorting->getStrategy(), SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
            animation, SLOT(update(std::vector<int>, std::vector<int>)));
    animation->start();
}

void Controller::setSortingStrategyQString(QString input)
{
    setSortingStrategy(input.toStdString());
}

void Controller::onNumbersChanged(std::vector<int> numbers, std::vector<int> indices)
{
    qDebug() << "Got signal";
    paintwidget.setPaintData(numbers, indices);
    paintwidget.repaint();
}

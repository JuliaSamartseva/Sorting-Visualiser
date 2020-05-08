#include "controller.h"
#include <QDebug>

void Controller::generateNumbers(int number)
{
    paintwidget.setSorted(false);
    paintwidget.setPenWidth(paintwidget.width() / number);
    animation->generateNumbers(number);
}

void Controller::setAnimation(SortingAnimation *value)
{
    animation = value;
}

void Controller::changeArraySize(int value)
{
    generateNumbers(value);
}

void Controller::changeAnimationSpeed(int value)
{
   animation->setAnimationSpeed(value);
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
    if (!paintwidget.getSorted()) {
        paintwidget.setAnimation(true);
        animation->setSortingStrategy(sorting);
        connect(sorting->getStrategy(), SIGNAL(NumbersChanged(std::vector<int>, std::vector<int>)),
                animation, SLOT(update(std::vector<int>, std::vector<int>)));
        animation->start();
        paintwidget.setSorted(true);
    }
}

void Controller::setSortingStrategyQString(QString input)
{
    setSortingStrategy(input.toStdString());
}

void Controller::onNumbersChanged(std::vector<int> numbers, std::vector<int> indices)
{
    paintwidget.setPaintData(numbers, indices);
    paintwidget.repaint();
}

#include "controller.h"

Controller::Controller()
{
    setSortingStrategy("QuickSort"); //default
}

Controller::Controller(std::string strategy, SortingAnimation *animation)
{
    setSortingStrategy(strategy);
    this->animation = animation;
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
    this->animation->setSortingStrategy(sorting);
    this->animation->start();
}

void Controller::setSortingStrategyQString(QString input)
{
    setSortingStrategy(input.toStdString());
}

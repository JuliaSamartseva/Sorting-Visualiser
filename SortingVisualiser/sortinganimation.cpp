#include "sortinganimation.h"
#include <QRandomGenerator>

std::vector<int> SortingAnimation::getNumbers()
{
    return numbers;
}

void SortingAnimation::run()
{
    sorting->sortNumbers(numbers);
}

void SortingAnimation::swap(std::vector<int> &numbers, int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

SortingAnimation::SortingAnimation(QObject *parent) : QThread(parent){}

void SortingAnimation::generateNumbers(int size)
{
    std::vector<int> result;
    this->size = size;

    result.reserve(size);

    int itemStep = (numberMax + 1 - numberMin) / size;
    result.push_back(itemStep);
    for (int i = 1; i < size; ++i)
        result.push_back((i+1) * itemStep);

    for (int i=0; i < result.size(); ++i)
    {
        int rand = QRandomGenerator::global()->bounded(0, result.size());
        swap(result, i, rand);
    }

    this->numbers = result;

    emit NumbersChanged(numbers, {0});
}

void SortingAnimation::setSortingStrategy(SortingContext *sorting)
{
    this->sorting = sorting;
}

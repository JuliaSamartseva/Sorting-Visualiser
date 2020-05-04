#ifndef SORTINGANIMATION_H
#define SORTINGANIMATION_H

#include <vector>
#include <QThread>
#include <sortingalgorithms.h>

class SortingAnimation : public QThread
{
     Q_OBJECT
private:
    QObject *parent;
    int numberMin = 10;
    int numberMax = 500;
    std::vector<int> numbers;
    SortingContext *sorting;
    int size;

    void swap(std::vector<int>& numbers, int i, int j);
public:
    explicit SortingAnimation(QObject *parent = nullptr);
    void generateNumbers(int size);
    void setSortingStrategy(SortingContext* sorting);
    std::vector<int> getNumbers();
    void run() override;
signals:
    void NumbersChanged(std::vector<int>, std::vector<int>);
};

#endif // SORTINGANIMATION_H

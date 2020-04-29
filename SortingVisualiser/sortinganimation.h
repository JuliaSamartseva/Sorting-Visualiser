#ifndef SORTINGANIMATION_H
#define SORTINGANIMATION_H

#include <vector>
#include <QThread>

class SortingAnimation : public QThread
{
     Q_OBJECT
private:
    int numberMin = 10;
    int numberMax = 500;
    void swap(std::vector<int>& numbers, int i, int j);
public:
    explicit SortingAnimation(QObject *parent = nullptr);
    void generateNumbers(int size);
signals:
    void NumbersChanged(std::vector<int>, std::vector<int>);
};

#endif // SORTINGANIMATION_H

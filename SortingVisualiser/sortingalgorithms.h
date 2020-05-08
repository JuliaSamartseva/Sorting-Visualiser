#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
#include <vector>
#include <QObject>
#include <QTimer>

class SortingStrategy : public QObject
{
    Q_OBJECT
private:
    int animationSpeed = 1000;
public:
    SortingStrategy() {
        qRegisterMetaType< std::vector<int>   >( "std::vector<int>"   ); //for thread queue
    }
    virtual void sort(std::vector<int> &list) = 0;
    virtual ~SortingStrategy() = 0;
    void update(std::vector<int> numbers, std::vector<int> indices);
signals:
    void NumbersChanged(std::vector<int>, std::vector<int>);
};

class QuickSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
    void quickSort(std::vector<int> &list, int low, int high);

};

class MergeSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
    void mergeSort(std::vector<int> &list, int left, int right);
    void merge(std::vector<int> &list, int left, int middle, int right);
};

class InsertionSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
};

class SelectionSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
};

class CocktailSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
};

class SortingContext
{
private:
    SortingStrategy *strategy;
public:
    void setStrategy(SortingStrategy *strategy)
    {
        this->strategy = strategy;
    }

    SortingStrategy* getStrategy()
    {
        return strategy;
    }

   void sortNumbers(std::vector<int> &numbers)
   {
        strategy->sort(numbers);
   }
};



#endif // SORTINGALGORITHMS_H

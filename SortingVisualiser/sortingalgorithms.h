#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
#include <vector>

class SortingStrategy
{
public:
    SortingStrategy();
    virtual void sort(std::vector<int> &list) = 0;
};

class QuickSort : public SortingStrategy
{
    void sort(std::vector<int> &list) override;
    void quickSort(std::vector<int> &list, int low, int high);
    int partition (std::vector<int> &list, int low, int high);
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
    void setSortingMethod(SortingStrategy *strategy) {
        this->strategy = strategy;
    }

    SortingStrategy* getStrategy() {
        return strategy;
    }

   void sortNumbers(std::vector<int> &numbers){
        strategy->sort(numbers);
    }
};



#endif // SORTINGALGORITHMS_H

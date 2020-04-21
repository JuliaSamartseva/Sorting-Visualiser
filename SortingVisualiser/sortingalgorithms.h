#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
#include <vector>

class SortingStrategy
{
public:
    SortingStrategy();
    virtual void sort(std::vector<int> list) = 0;
};

class QuickSort : public SortingStrategy {
    void sort(std::vector<int> list) override;
};

class MergeSort : public SortingStrategy {
    void sort(std::vector<int> list) override;
};

class InsertionSort : public SortingStrategy {
    void sort(std::vector<int> list) override;
};

class SelectionSort : public SortingStrategy {
    void sort(std::vector<int> list) override;
};

class CocktailSort : public SortingStrategy {
    void sort(std::vector<int> list) override;
};

class SortingContext {

private:
    SortingStrategy *strategy;

public:
    void setSortingMethod(SortingStrategy *strategy) {
        this->strategy = strategy;
    }

    SortingStrategy* getStrategy() {
        return strategy;
    }

    public void sortNumbers(std::vector<int> numbers){
        strategy->sort(numbers);
    }
}



#endif // SORTINGALGORITHMS_H

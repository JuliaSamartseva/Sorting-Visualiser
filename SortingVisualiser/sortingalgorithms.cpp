#include "sortingalgorithms.h"

void swap(int* a, int* b);

void QuickSort::sort(std::vector<int> &list)
{
    quickSort(list, 0, list.size()-1);
}

void QuickSort::quickSort(std::vector<int> &list, int low, int high)
{
    if (low < high)
        {
            int pi = partition(list, low, high);
           quickSort(list,low, pi - 1);
            quickSort(list, pi + 1, high);
        }
}

int QuickSort::partition(std::vector<int> &list, int low, int high)
{
    int pivot = list[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (list[j] < pivot)
        {
           swap(&list[i], &list[j]);
        }
    }
    swap(&list[i + 1], &list[high]);
    return (i + 1);
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

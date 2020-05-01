#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <sortingalgorithms.h>
#include <string>


class Controller
{
private:
    SortingContext *sorting;
public:
    Controller();
    void setSortingStrategy(std::string strategy);
};

#endif // CONTROLLER_H

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QString>
#include <QObject>
#include <sortingalgorithms.h>
#include <sortinganimation.h>
#include <string>


class Controller : public QObject
{
    Q_OBJECT
private:
    SortingContext *sorting;
    SortingAnimation* animation;
public:
    Controller();
    Controller(std::string strategy, SortingAnimation* animation);
    void setSortingStrategy(std::string strategy);
    void startSorting();
public slots:
    void setSortingStrategyQString(QString);
};

#endif // CONTROLLER_H

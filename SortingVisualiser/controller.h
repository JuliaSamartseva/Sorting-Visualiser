#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QString>
#include <QObject>
#include <sortingalgorithms.h>
#include <sortinganimation.h>
#include <string>
#include <painter.h>


class Controller : public QObject
{
    Q_OBJECT
private:
    SortingContext *sorting;
    SortingAnimation* animation;
    Painter paintwidget;
public:
    Controller();
    Controller(SortingAnimation* animation);
    void setSortingStrategy(std::string strategy);
    void startSorting();
    void generateNumbers(int number);
    Painter* getPaintWidget() {return &paintwidget;}
    void setAnimation(SortingAnimation *value);
    void changeArraySize(int value);
    void changeAnimationSpeed(int value);

public slots:
    void setSortingStrategyQString(QString);
    void onNumbersChanged(std::vector<int>, std::vector<int>);
};

#endif // CONTROLLER_H

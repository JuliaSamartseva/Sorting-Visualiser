#ifndef PAINTOR_H
#define PAINTOR_H
#include <QObject>
#include <QWidget>
#include <QMutex>
#include <QPainter>
#include <vector>


class Painter : public QWidget
{
    Q_OBJECT
private:
    QPen pen;
    QBrush brush;
    QPalette palette;

    QColor blockColor;
    QColor backgroundColor;

    bool animate;
    int penWidth;
    int spacing;

    std::vector<int> numbers;
    std::vector<int> indices;

public:
    explicit Painter(QWidget *parent = nullptr);

    void setData(std::vector<int> numbers);
    QColor getBlockColor() const;
    void setBlockColor(const QColor &value);
    QColor getBackgroundColor() const;
    void setBackgroundColor(const QColor &value);
};

#endif // PAINTOR_H

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
    QColor backgroundColor = Qt::white;

    bool animate = false;
    int penWidth = 5;

    bool sorted = false;

    std::vector<int> numbers;
    std::vector<int> indices;

protected:
    void paintEvent(QPaintEvent *event) override;

public:
    explicit Painter(QWidget *parent = nullptr);
    void setPaintData(std::vector<int> numbers, std::vector<int> indices);

    void setAnimation(bool animate);
    QColor getBlockColor() const;
    void setBlockColor(const QColor &value);
    QColor getBackgroundColor() const;
    void setBackgroundColor(const QColor &value);
    std::vector<int> getNumbers() const;
    int getPenWidth() const;
    void updatePenWidth();
    void setPenWidth(double value);
    bool getSorted() const;
    void setSorted(bool value);

signals:
    void NumbersChanged(std::vector<int>, std::vector<int>);
};

#endif // PAINTOR_H

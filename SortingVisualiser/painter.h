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

    bool animate;
    int penWidth;
    int spacing;

    std::vector<int> numbers;
    std::vector<int> indices;

protected:
    void paintEvent(QPaintEvent *event) override;

public:
    explicit Painter(QWidget *parent = nullptr);
    void setPaintData(std::vector<int> numbers, std::vector<int> indices);

    void setData(std::vector<int> numbers);
    QColor getBlockColor() const;
    void setBlockColor(const QColor &value);
    QColor getBackgroundColor() const;
    void setBackgroundColor(const QColor &value);
};

#endif // PAINTOR_H

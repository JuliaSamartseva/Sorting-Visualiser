#include "painter.h"
#include <QDebug>

QColor Painter::getBackgroundColor() const
{
    return backgroundColor;
}

void Painter::setBackgroundColor(const QColor &value)
{
    backgroundColor = value;
}

std::vector<int> Painter::getNumbers() const
{
    return numbers;
}

void Painter::paintEvent(QPaintEvent *event)
{
    qDebug() << "painting";
    QPainter painter(this);

    int iColor = 0;

    for (int i = 0; i < numbers.size(); ++i)
    {
        pen.setColor(blockColor);
        painter.setPen(pen);

        if (animate && (std::find(indices.begin(), indices.end(), i) != indices.end()))
        {
            pen.setColor(Qt::green);
            painter.setPen(pen);
            ++iColor;
        }

        painter.drawLine((i-1)*penWidth, this->height(),
                         (i-1)*penWidth, this->height() - numbers[i]);
    }
}

Painter::Painter(QWidget *parent)
{
    palette.setColor(QPalette::Background,backgroundColor);
    setPalette(palette);
    setAutoFillBackground(true);
    animate = false;
    penWidth = 5;
    this->pen = QPen(Qt::lightGray, penWidth, Qt::PenStyle::SolidLine, Qt::PenCapStyle::SquareCap, Qt::PenJoinStyle::BevelJoin);
}

void Painter::setPaintData(std::vector<int> numbers, std::vector<int> indices)
{
    this->numbers = numbers;
    this->indices = indices;
}

void Painter::setAnimation(bool animate)
{
    this->animate = animate;
}

QColor Painter::getBlockColor() const
{
    return blockColor;
}

void Painter::setBlockColor(const QColor &value)
{
    blockColor = value;
}

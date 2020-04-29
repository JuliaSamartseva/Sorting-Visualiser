#include "painter.h"

QColor Painter::getBackgroundColor() const
{
    return backgroundColor;
}

void Painter::setBackgroundColor(const QColor &value)
{
    backgroundColor = value;
}

void Painter::paintEvent(QPaintEvent *event)
{
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
    penWidth = 10;
    this->pen = QPen(Qt::lightGray, penWidth, Qt::PenStyle::SolidLine, Qt::PenCapStyle::SquareCap, Qt::PenJoinStyle::BevelJoin);
}

void Painter::setPaintData(std::vector<int> numbers, std::vector<int> indices)
{
    this->numbers = numbers;
    this->indices = indices;
}

QColor Painter::getBlockColor() const
{
    return blockColor;
}

void Painter::setBlockColor(const QColor &value)
{
    blockColor = value;
}

#include "painter.h"

QColor Painter::getBackgroundColor() const
{
    return backgroundColor;
}

void Painter::setBackgroundColor(const QColor &value)
{
    backgroundColor = value;
}

QColor Painter::getBlockColor() const
{
    return blockColor;
}

void Painter::setBlockColor(const QColor &value)
{
    blockColor = value;
}

#ifndef PLOTTRIANGLE_H
#define PLOTTRIANGLE_H

#include <QtCore>
#include <QtGui>

class PlotTriangle : public QGraphicsItem
{
public:
    PlotTriangle();
    QRectF PlotTriangle::boundingRect() const;
    QPainterPath PlotTriangle::shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // PLOTTRIANGLE_H

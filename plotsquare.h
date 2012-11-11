#ifndef PLOTSQUARE_H
#define PLOTSQUARE_H

#include <QtCore>
#include <QtGui>

class PlotSquare : public QGraphicsItem
{
public:
    PlotSquare();
    QRectF PlotSquare::boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // PLOTSQUARE_H

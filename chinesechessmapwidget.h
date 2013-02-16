#ifndef CHINESECHESSMAPWIDGET_H
#define CHINESECHESSMAPWIDGET_H

#include <QGraphicsRectItem>

class ChineseChessMapWidget : public QGraphicsRectItem
{
public:
    ChineseChessMapWidget();
    virtual ~ChineseChessMapWidget();
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:


};

#endif // CHINESECHESSMAPWIDGET_H

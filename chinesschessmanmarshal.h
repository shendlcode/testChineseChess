#ifndef CHINESSCHESSMANMARSHAL_H
#define CHINESSCHESSMANMARSHAL_H
#include "chinesschessman.h"
#include <QPainter>
class ChinessChessmanMarshal : public ChinessChessman
{
public:
    ChinessChessmanMarshal();
    virtual ~ChinessChessmanMarshal();

    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:

};

#endif // CHINESSCHESSMANMARSHAL_H

#include "chinesschessmanmarshal.h"

ChinessChessmanMarshal::ChinessChessmanMarshal()
{
}
ChinessChessmanMarshal::~ChinessChessmanMarshal()
{
}
void ChinessChessmanMarshal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    Q_UNUSED(option);
    Q_UNUSED(widget);
   // painter->setPen(Qt::NoPen);
   // painter->setBrush(Qt::darkGray);
   // painter->drawEllipse(-12, -12, 30, 30);
   // painter->setPen(QPen(Qt::black, 1));
    //painter->setBrush(QBrush(color));
    //painter->drawEllipse(this->rect().x(),this->rect().y(),this->rect().width(),this->rect().height());
    //painter->drawPixmap(this->rect(),);
    painter->drawText(this->rect(),"帅");
}
 void ChinessChessmanMarshal::mousePressEvent(QGraphicsSceneMouseEvent *event){


 }
 void ChinessChessmanMarshal::mouseMoveEvent(QGraphicsSceneMouseEvent *event){


 }
 void ChinessChessmanMarshal::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){


 }

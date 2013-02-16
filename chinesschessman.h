#ifndef CHINESSCHESSMAN_H
#define CHINESSCHESSMAN_H

#include <QGraphicsEllipseItem>
#include <QPixmap>
#include "chinesechessUtils.h"
class ChinessChessman : public QGraphicsEllipseItem
{
public:
    ChinessChessman(void);
    virtual ~ChinessChessman(void);
    virtual QPixmap *getPixmap(void) const;
    virtual void setPixmap(QPixmap *pixmap) ;
private:
    QPixmap *pixmap;
    //black or red
   enum ChineseChessType type;
};

#endif // CHINESSCHESSMAN_H

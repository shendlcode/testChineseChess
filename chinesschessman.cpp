#include "chinesschessman.h"

ChinessChessman::ChinessChessman()
{
}
ChinessChessman::~ChinessChessman()
{
}
QPixmap *ChinessChessman::getPixmap(void) const{
    return this->pixmap;
}
void ChinessChessman::setPixmap(QPixmap *pixmap){
    this->pixmap=pixmap;
}

#include "chinesechesswidget.h"

ChineseChessWidget::ChineseChessWidget(QObject *parent) :
    QObject(parent),
    scene(NULL),
    view(NULL),
    dialog(NULL)
{
}
ChineseChessWidget::~ChineseChessWidget(void){

}
void ChineseChessWidget::assemble(void){



}
QGraphicsScene *ChineseChessWidget::getScene(void) const{
    return this->scene;
}
QGraphicsView *ChineseChessWidget::getView(void) const{
    return this->view;
}
Dialog *ChineseChessWidget::getDialog(void) const{
    return this->dialog;
}

void ChineseChessWidget::setScene(QGraphicsScene *scene){
    this->scene=scene;
}
void ChineseChessWidget::setView(QGraphicsView *view){
    this->view=view;
}
void ChineseChessWidget::setDialog(Dialog *dialog){
    this->dialog=dialog;
}

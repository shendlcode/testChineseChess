#ifndef CHINESECHESSWIDGET_H
#define CHINESECHESSWIDGET_H

#include <QObject>
////////C

/////////qt
#include <QGraphicsView>
#include <QGraphicsScene>
////////////project
#include "dialog.h"
#include "chinesechessmapwidget.h"
class ChineseChessWidget : public QObject
{
    Q_OBJECT
public:
    explicit ChineseChessWidget(QObject *parent = 0);
    virtual ~ChineseChessWidget(void);
    void assemble(void);
    QGraphicsScene *getScene(void) const;
    QGraphicsView *getView(void) const;
    Dialog *getDialog(void) const;

   void setScene(QGraphicsScene *scene) ;
    void setView(QGraphicsView *view) ;
    void setDialog(Dialog *dialog) ;
signals:
    
public slots:
private:
    //ChessMapItem *chessMapItem;
    QGraphicsScene *scene;
    QGraphicsView *view;
    Dialog *dialog;
    //component
    ChineseChessMapWidget *map;
    QGraphicsProxyWidget *backBtnProxy; //= this->scene->addWidget(backBtn);
    QGraphicsProxyWidget *blackGiveupBtnProxy;
    QGraphicsProxyWidget *redGiveupBtnProxy;
    QGraphicsProxyWidget *restoreBtnProxy;
    QGraphicsProxyWidget *blackLabelProxy;
    QGraphicsProxyWidget *redLabelProxy;

    
};

#endif // CHINESECHESSWIDGET_H

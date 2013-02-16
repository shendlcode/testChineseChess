#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_backBtn_clicked();

    void on_helpBtn_clicked();

    void on_loadBtn_clicked();

    void on_singleBtn_clicked();

    void on_twoBtn_clicked();

    void on_networkBtn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

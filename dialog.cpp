#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_backBtn_clicked()
{

}

void Dialog::on_helpBtn_clicked()
{

}

void Dialog::on_loadBtn_clicked()
{

}

void Dialog::on_singleBtn_clicked()
{

}

void Dialog::on_twoBtn_clicked()
{

}

void Dialog::on_networkBtn_clicked()
{

}

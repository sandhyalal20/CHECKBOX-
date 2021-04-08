#include "widget.h"
#include "ui_widget.h"
#include<QButtonGroup>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *button=new QButtonGroup(this);
    button->addButton(ui->windows);
     button->addButton(ui->linux_2);
      button->addButton(ui->mac_3);
      button->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //EXCLUSIVE
    if(ui->windows->isChecked())
    {
        qDebug()<<"Windows checkbox is checked";
    }
    else
    {
        qDebug()<<"Windows checkbox is Unchecked";
    }
}

void Widget::on_pushButton_2_clicked()
{
    //NON-EXCLUSIVE
    if(ui->windows->isChecked())
    {
        ui->windows->setChecked(false);
    }
    else
    {
        ui->windows->setChecked(true);
    }
}

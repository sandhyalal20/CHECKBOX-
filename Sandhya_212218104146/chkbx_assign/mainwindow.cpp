#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream out(stdout);
    if(ui->checkBox->isChecked())
    {
        out<<"Bold is checked\n";
    }
    ui->label->setText("<font color='brown'>Change Me!!</font>");
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream out(stdout);
    if(ui->checkBox_2->isChecked())
    {
        out<<"Italic is checked\n";
    }
    ui->label->setText("<font color='green'>Change Me!!</font>");
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream out(stdout);
    if(ui->radioButton->isChecked())
    {
        out<<"Left is checked\n";
    }
    ui->label->setText("<font color='black'>Change Me!!</font>");
}


void MainWindow::on_radioButton_2_clicked()
{
    QTextStream out(stdout);
    if(ui->radioButton_2->isChecked())
    {
        out<<"Right is checked\n";
    }
    ui->label->setText("<font color='blue'>Change Me!!</font>");
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream out(stdout);
    if(ui->radioButton_3->isChecked())
    {
        out<<"Centre is checked\n";
    }
    ui->label->setText("<font color='orange'>Change Me!!</font>");
}

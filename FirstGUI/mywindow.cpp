#include "mywindow.h"
#include "ui_mywindow.h"

myWindow::myWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myWindow)
{
    ui->setupUi(this);
}

myWindow::~myWindow()
{
    delete ui;
}

void myWindow::on_pushButton_clicked()
{
    ui->label->setText("text is clicked");

}


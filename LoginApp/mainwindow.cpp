#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Tanu/OneDrive/Pictures/bg1.jpg");
    int width = ui->label_picture->width();
    int height = ui->label_picture->height();
    ui->label_picture->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_2_Password->text();

    if (username == "test" && password == "test"){
        //QMessageBox::information(this, "login","Username and password is correct");
        //hide();
        //secDialog =  new Dialog(this);
        //secDialog->show();

        ui->statusbar->showMessage("Username and password id correct",5000);
    }
    else {
        //QMessageBox::warning(this, "login","Username and password is not correct");
        ui->statusbar->showMessage("Username and password not correct",5000);
    }

}


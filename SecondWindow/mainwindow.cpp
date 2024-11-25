#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "dialog.h"

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

void MainWindow::on_pushButton_clicked()
{
    //model based approach on stack. First window is not accessible when sec is open
   // Dialog secDialogue;
   // secDialogue.setModal(true);
   // secDialogue.exec();

    //Non model based appraoch . First is accessible when sec is open
    //secDialogue = new Dialog(this);
    //secDialogue->show();

    //hide the first window and then open the sec window
    hide();
    secDialogue = new Dialog(this);
    secDialogue->show();
}


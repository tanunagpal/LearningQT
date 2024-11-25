/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myWindow)
    {
        if (myWindow->objectName().isEmpty())
            myWindow->setObjectName("myWindow");
        myWindow->resize(800, 600);
        centralwidget = new QWidget(myWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 180, 93, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 50, 171, 41));
        myWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        myWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(myWindow);
        statusbar->setObjectName("statusbar");
        myWindow->setStatusBar(statusbar);

        retranslateUi(myWindow);

        QMetaObject::connectSlotsByName(myWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myWindow)
    {
        myWindow->setWindowTitle(QCoreApplication::translate("myWindow", "myWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("myWindow", "Click Here", nullptr));
        label->setText(QCoreApplication::translate("myWindow", "Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWindow: public Ui_myWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H

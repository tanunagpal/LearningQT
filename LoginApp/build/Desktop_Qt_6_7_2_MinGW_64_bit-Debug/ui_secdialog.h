/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecDialogLabel
{
public:
    QLabel *label;

    void setupUi(QDialog *SecDialogLabel)
    {
        if (SecDialogLabel->objectName().isEmpty())
            SecDialogLabel->setObjectName("SecDialogLabel");
        SecDialogLabel->resize(400, 300);
        label = new QLabel(SecDialogLabel);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 141, 71));

        retranslateUi(SecDialogLabel);

        QMetaObject::connectSlotsByName(SecDialogLabel);
    } // setupUi

    void retranslateUi(QDialog *SecDialogLabel)
    {
        SecDialogLabel->setWindowTitle(QCoreApplication::translate("SecDialogLabel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecDialogLabel", "Hello from second dialogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialogLabel: public Ui_SecDialogLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H

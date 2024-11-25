#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class myWindow;
}
QT_END_NAMESPACE

class myWindow : public QMainWindow
{
    Q_OBJECT

public:
    myWindow(QWidget *parent = nullptr);
    ~myWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myWindow *ui;
};
#endif // MYWINDOW_H

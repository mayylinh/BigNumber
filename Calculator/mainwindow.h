#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Add_clicked();

    void on_pushButton_Subtract_clicked();

    void on_pushButton_Multiply_clicked();

    void on_pushButton_Divide_clicked();

    void on_pushButton_Mod_clicked();

    void on_pushButton_CLEAR_clicked();

    void on_pushButton_Equal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

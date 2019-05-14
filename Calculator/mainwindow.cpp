#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<int> bigNum1, bigNum2, answer;
bool operatorPressed = false;
int mathOperator = -1;

void MainWindow::on_pushButton_0_clicked()
{
    QString temp = ui->label->text();
    temp.append( "0" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 0);
    else {
        bigNum2.insert(bigNum2.end(), 0);
    }
}
void MainWindow::on_pushButton_1_clicked()
{
    QString temp = ui->label->text();
    temp.append( "1" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 1);
    else {
        bigNum2.insert(bigNum2.end(), 1);
    }
}
void MainWindow::on_pushButton_2_clicked()
{
    QString temp = ui->label->text();
    temp.append( "2" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 2);
    else {
        bigNum2.insert(bigNum2.end(), 2);
    }
}
void MainWindow::on_pushButton_3_clicked()
{
    QString temp = ui->label->text();
    temp.append( "3" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 3);
    else {
        bigNum2.insert(bigNum2.end(), 3);
    }
}
void MainWindow::on_pushButton_4_clicked()
{
    QString temp = ui->label->text();
    temp.append( "4" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 4);
    else {
        bigNum2.insert(bigNum2.end(), 4);
    }
}
void MainWindow::on_pushButton_5_clicked()
{
    QString temp = ui->label->text();
    temp.append( "5" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 5);
    else {
        bigNum2.insert(bigNum2.end(), 5);
    }
}
void MainWindow::on_pushButton_6_clicked()
{
    QString temp = ui->label->text();
    temp.append( "6" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 6);
    else {
        bigNum2.insert(bigNum2.end(), 6);
    }
}
void MainWindow::on_pushButton_7_clicked()
{
    QString temp = ui->label->text();
    temp.append( "7" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 7);
    else {
        bigNum2.insert(bigNum2.end(), 7);
    }
}
void MainWindow::on_pushButton_8_clicked()
{
    QString temp = ui->label->text();
    temp.append( "8" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 8);
    else {
        bigNum2.insert(bigNum2.end(), 8);
    }
}
void MainWindow::on_pushButton_9_clicked()
{
    QString temp = ui->label->text();
    temp.append( "9" );
    ui->label->setText( temp );
    if (!operatorPressed)
        bigNum1.insert(bigNum1.end(), 9);
    else {
        bigNum2.insert(bigNum2.end(), 9);
    }
}

void MainWindow::on_pushButton_Add_clicked()
{
    operatorPressed = true;
    mathOperator = 1;
    QString temp = ui->label->text();
    temp.append( "\n+" );
    ui->label->setText( temp );
}

void MainWindow::on_pushButton_Subtract_clicked()
{
    operatorPressed = true;
    mathOperator = 2;
    QString temp = ui->label->text();
    temp.append( "\n-" );
    ui->label->setText( temp );
}

void MainWindow::on_pushButton_Multiply_clicked()
{
    operatorPressed = true;
    mathOperator = 3;
    QString temp = ui->label->text();
    temp.append( "\n*" );
    ui->label->setText( temp );
}

void MainWindow::on_pushButton_Divide_clicked()
{
    operatorPressed = true;
    mathOperator = 4;
    QString temp = ui->label->text();
    temp.append( "\n/" );
    ui->label->setText( temp );
}

void MainWindow::on_pushButton_Mod_clicked()
{
    operatorPressed = true;
    mathOperator = 5;
    QString temp = ui->label->text();
    temp.append( "\n%" );
    ui->label->setText( temp );
}

void MainWindow::on_pushButton_CLEAR_clicked()
{
    ui->label->setText("");
    bigNum1 = {};
    bigNum2 = {};
    mathOperator = -1;
}

void MainWindow::on_pushButton_Equal_clicked()
{
    QString temp = "";

    switch (mathOperator)
    {
        case 1: answer = Add(bigNum1, bigNum2); break;
        case 2: answer = Subtract(bigNum1, bigNum2); break;
        case 3: answer = Multiply(bigNum1, bigNum2); break;
        case 4: answer = Divide(bigNum1, bigNum2); break;
        case 5: answer = Mod(bigNum1, bigNum2); break;
    }
    for (int i = 0; i < answer.size(); i ++)
        temp.append(answer[i]);
    ui->label->setText( temp );
}

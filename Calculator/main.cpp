#include "mainwindow.h"
#include <QApplication>
#include "bignumberslib.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    BigNumbersLib bigNumsLib;
    w.show();

    return a.exec();
}

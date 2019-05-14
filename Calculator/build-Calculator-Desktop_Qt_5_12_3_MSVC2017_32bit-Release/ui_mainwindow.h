/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_ON;
    QPushButton *pushButton_OFF;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_Negative;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_Subtract;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_CLEAR;
    QPushButton *pushButton_Equal;
    QPushButton *pushButton_Mod;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 560);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 60, 401, 501));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Divide = new QPushButton(gridLayoutWidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        pushButton_Divide->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Divide, 3, 3, 1, 1);

        pushButton_ON = new QPushButton(gridLayoutWidget);
        pushButton_ON->setObjectName(QString::fromUtf8("pushButton_ON"));
        pushButton_ON->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_ON, 0, 0, 1, 1);

        pushButton_OFF = new QPushButton(gridLayoutWidget);
        pushButton_OFF->setObjectName(QString::fromUtf8("pushButton_OFF"));
        pushButton_OFF->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_OFF, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_Multiply = new QPushButton(gridLayoutWidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        pushButton_Multiply->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Multiply, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_Negative = new QPushButton(gridLayoutWidget);
        pushButton_Negative->setObjectName(QString::fromUtf8("pushButton_Negative"));
        pushButton_Negative->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Negative, 0, 2, 1, 1);

        pushButton_Add = new QPushButton(gridLayoutWidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Add, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_Subtract = new QPushButton(gridLayoutWidget);
        pushButton_Subtract->setObjectName(QString::fromUtf8("pushButton_Subtract"));
        pushButton_Subtract->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Subtract, 1, 3, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_CLEAR = new QPushButton(gridLayoutWidget);
        pushButton_CLEAR->setObjectName(QString::fromUtf8("pushButton_CLEAR"));
        pushButton_CLEAR->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_CLEAR, 4, 1, 1, 1);

        pushButton_Equal = new QPushButton(gridLayoutWidget);
        pushButton_Equal->setObjectName(QString::fromUtf8("pushButton_Equal"));
        pushButton_Equal->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Equal, 4, 2, 1, 1);

        pushButton_Mod = new QPushButton(gridLayoutWidget);
        pushButton_Mod->setObjectName(QString::fromUtf8("pushButton_Mod"));
        pushButton_Mod->setMaximumSize(QSize(90, 90));

        gridLayout->addWidget(pushButton_Mod, 4, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 61));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_ON->setText(QApplication::translate("MainWindow", "ON", nullptr));
        pushButton_OFF->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_Multiply->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_Negative->setText(QApplication::translate("MainWindow", "-/+", nullptr));
        pushButton_Add->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_Subtract->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_CLEAR->setText(QApplication::translate("MainWindow", "CLEAR", nullptr));
        pushButton_Equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_Mod->setText(QApplication::translate("MainWindow", "%", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

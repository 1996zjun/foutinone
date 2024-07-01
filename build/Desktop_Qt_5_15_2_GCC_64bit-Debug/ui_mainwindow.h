/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tabCurveData;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tabCurveCorrrection;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QWidget *tabCurveChart;
    QWidget *samplesTest;
    QTableWidget *tableWidget;
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *logoutButton;
    QPushButton *testButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(971, 561);
        MainWindow->setStyleSheet(QString::fromUtf8("background: #F1F4F8;"));
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(210, 20, 741, 521));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabCurveData = new QWidget();
        tabCurveData->setObjectName(QString::fromUtf8("tabCurveData"));
        tableWidget_2 = new QTableWidget(tabCurveData);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_2->rowCount() < 7)
            tableWidget_2->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 0, __qtablewidgetitem22);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 20, 701, 261));
        tableWidget_2->setLineWidth(1);
        tableWidget_2->setTextElideMode(Qt::ElideRight);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setGridStyle(Qt::SolidLine);
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setCornerButtonEnabled(true);
        tableWidget_2->horizontalHeader()->setVisible(true);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(57);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(99);
        tableWidget_2->horizontalHeader()->setHighlightSections(true);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(33);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        pushButton_4 = new QPushButton(tabCurveData);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 420, 89, 40));
        pushButton_5 = new QPushButton(tabCurveData);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(390, 420, 89, 40));
        tabWidget->addTab(tabCurveData, QString());
        tabCurveCorrrection = new QWidget();
        tabCurveCorrrection->setObjectName(QString::fromUtf8("tabCurveCorrrection"));
        tableWidget_3 = new QTableWidget(tabCurveCorrrection);
        if (tableWidget_3->columnCount() < 7)
            tableWidget_3->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem29);
        if (tableWidget_3->rowCount() < 7)
            tableWidget_3->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_3->setItem(3, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_3->setItem(3, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_3->setItem(4, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_3->setItem(4, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_3->setItem(5, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_3->setItem(6, 0, __qtablewidgetitem45);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(20, 20, 701, 261));
        tableWidget_3->setLineWidth(1);
        tableWidget_3->setTextElideMode(Qt::ElideRight);
        tableWidget_3->setShowGrid(true);
        tableWidget_3->setGridStyle(Qt::SolidLine);
        tableWidget_3->setSortingEnabled(false);
        tableWidget_3->setCornerButtonEnabled(true);
        tableWidget_3->horizontalHeader()->setVisible(true);
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(57);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(99);
        tableWidget_3->horizontalHeader()->setHighlightSections(true);
        tableWidget_3->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_3->verticalHeader()->setVisible(false);
        tableWidget_3->verticalHeader()->setDefaultSectionSize(33);
        tableWidget_3->verticalHeader()->setHighlightSections(true);
        pushButton_7 = new QPushButton(tabCurveCorrrection);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(210, 420, 89, 40));
        pushButton_6 = new QPushButton(tabCurveCorrrection);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 420, 89, 40));
        tabWidget->addTab(tabCurveCorrrection, QString());
        tabCurveChart = new QWidget();
        tabCurveChart->setObjectName(QString::fromUtf8("tabCurveChart"));
        tabWidget->addTab(tabCurveChart, QString());
        samplesTest = new QWidget();
        samplesTest->setObjectName(QString::fromUtf8("samplesTest"));
        samplesTest->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(samplesTest);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem47);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem63);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(170, 90, 331, 261));
        tableWidget->setLineWidth(1);
        tableWidget->setTextElideMode(Qt::ElideRight);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(57);
        tableWidget->horizontalHeader()->setDefaultSectionSize(155);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(33);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tabWidget->addTab(samplesTest, QString());
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 120, 181, 231));
        widget->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border-radius: 10px;"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 67, 17));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 70, 120, 40));
        pushButton->setStyleSheet(QString::fromUtf8("width: 120px;\n"
"height: 40px;\n"
"background: #005AE7;\n"
"border-radius: 4px;\n"
"border: 1px solid #D3D6D9;\n"
"color: #FFFFFF;\n"
"font-style: normal;"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 120, 120, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("width: 120px;\n"
"height: 40px;\n"
"background: #005AE7;\n"
"border-radius: 4px;\n"
"border: 1px solid #D3D6D9;\n"
"color: #FFFFFF;\n"
"font-style: normal;"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 170, 120, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("width:120px;\n"
"height:40px;\n"
"background: #005AE7;\n"
"border-radius: 4px;\n"
"border: 1px solid #D3D6D9;\n"
"color: #FFFFFF;\n"
"font-style: normal;"));
        logoutButton = new QPushButton(MainWindow);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(50, 510, 101, 31));
        testButton = new QPushButton(MainWindow);
        testButton->setObjectName(QString::fromUtf8("testButton"));
        testButton->setGeometry(QRect(20, 10, 171, 61));
        testButton->setLayoutDirection(Qt::LeftToRight);
        testButton->setStyleSheet(QString::fromUtf8("width: 112px;\n"
"height: 54px;\n"
"background: #005AE7;\n"
"border-radius: 4px;\n"
"border: 1px solid #D3D6D9;\n"
"font-weight: bold;\n"
"font-size: 18px;\n"
"color: #FFFFFF;\n"
"font-style: normal;"));

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "0 ppm", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "10ppm", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2463", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2464", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2465", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2466", nullptr));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\344\271\231\344\272\214\351\206\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->item(2, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\347\203\237\347\202\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->item(3, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\205\270\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->item(4, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\242\261\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\346\260\247\345\214\226\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->item(6, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\347\241\235\345\214\226\345\200\274", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCurveData), QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\346\225\260\346\215\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "0 ppm", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "10ppm", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2463", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2464", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2465", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "\346\265\223\345\272\2466", nullptr));

        const bool __sortingEnabled1 = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->item(0, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->item(1, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "\344\271\231\344\272\214\351\206\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->item(2, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\347\203\237\347\202\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\205\270\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->item(4, 0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\242\261\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->item(5, 0);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "\346\260\247\345\214\226\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->item(6, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "\347\241\235\345\214\226\345\200\274", nullptr));
        tableWidget_3->setSortingEnabled(__sortingEnabled1);

        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCurveCorrrection), QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\347\237\253\346\255\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCurveChart), QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\345\233\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "\345\206\205\345\256\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234", nullptr));

        const bool __sortingEnabled2 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(0, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(1, 0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "\344\271\231\344\272\214\351\206\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "\347\203\237\347\202\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(3, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\205\270\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(4, 0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\242\261\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(5, 0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "\346\260\247\345\214\226\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(6, 0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "\347\241\235\345\214\226\345\200\274", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(samplesTest), QCoreApplication::translate("MainWindow", "\346\240\267\345\223\201\346\243\200\346\265\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\351\205\215\347\275\256", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\347\224\250\346\210\267\346\225\260\346\215\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\347\224\250\346\210\267\346\225\260\346\215\256", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\345\207\272\345\216\202\351\205\215\347\275\256", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        testButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\243\200\346\265\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

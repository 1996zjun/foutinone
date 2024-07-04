/********************************************************************************
** Form generated from reading UI file 'historyrecords.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYRECORDS_H
#define UI_HISTORYRECORDS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryRecords
{
public:
    QPushButton *btnBack;
    QStackedWidget *stackedWidget;
    QWidget *pageViscometer;
    QWidget *boxWidget;
    QLabel *label_15;
    QLineEdit *lineEdit_7;
    QLabel *label_16;
    QLineEdit *lineEdit_8;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QLabel *label_18;
    QLineEdit *lineEdit_10;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QLabel *label_20;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_25;
    QWidget *pageParticleCounter;
    QWidget *pageInfraredDetector;
    QPushButton *btnViscometer;
    QPushButton *btnParticleCounter;
    QPushButton *btnInfraredDetector;

    void setupUi(QWidget *HistoryRecords)
    {
        if (HistoryRecords->objectName().isEmpty())
            HistoryRecords->setObjectName(QString::fromUtf8("HistoryRecords"));
        HistoryRecords->resize(1024, 768);
        btnBack = new QPushButton(HistoryRecords);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(30, 680, 100, 50));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton { background: #FF6347; color: #fff; font-weight: bold; }"));
        stackedWidget = new QStackedWidget(HistoryRecords);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 9, 915, 750));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setInputMethodHints(Qt::ImhNoAutoUppercase);
        pageViscometer = new QWidget();
        pageViscometer->setObjectName(QString::fromUtf8("pageViscometer"));
        pageViscometer->setStyleSheet(QString::fromUtf8(""));
        boxWidget = new QWidget(pageViscometer);
        boxWidget->setObjectName(QString::fromUtf8("boxWidget"));
        boxWidget->setGeometry(QRect(160, 40, 361, 501));
        boxWidget->setStyleSheet(QString::fromUtf8("#boxWidget {\n"
"background: #fff;\n"
"border-radius: 10px\n"
"}"));
        label_15 = new QLabel(boxWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 50, 67, 17));
        lineEdit_7 = new QLineEdit(boxWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 40, 111, 31));
        label_16 = new QLabel(boxWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(40, 100, 67, 17));
        lineEdit_8 = new QLineEdit(boxWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 90, 111, 31));
        label_17 = new QLabel(boxWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(40, 150, 67, 17));
        lineEdit_9 = new QLineEdit(boxWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(110, 140, 111, 31));
        label_18 = new QLabel(boxWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(40, 200, 67, 17));
        lineEdit_10 = new QLineEdit(boxWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(110, 190, 111, 31));
        label_19 = new QLabel(boxWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 250, 67, 17));
        lineEdit_11 = new QLineEdit(boxWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(110, 240, 111, 31));
        label_20 = new QLabel(boxWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(40, 300, 67, 17));
        lineEdit_12 = new QLineEdit(boxWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(110, 290, 111, 31));
        label_21 = new QLabel(boxWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(240, 100, 67, 17));
        label_22 = new QLabel(boxWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(240, 150, 67, 17));
        label_23 = new QLabel(boxWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(240, 200, 67, 17));
        label_24 = new QLabel(boxWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(240, 250, 67, 17));
        pushButton_4 = new QPushButton(boxWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 400, 71, 41));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-previous")));
        pushButton_4->setIcon(icon);
        pushButton_5 = new QPushButton(boxWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 400, 71, 41));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("go-next")));
        pushButton_5->setIcon(icon1);
        label_25 = new QLabel(boxWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 10, 67, 17));
        stackedWidget->addWidget(pageViscometer);
        pageParticleCounter = new QWidget();
        pageParticleCounter->setObjectName(QString::fromUtf8("pageParticleCounter"));
        pageParticleCounter->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(pageParticleCounter);
        pageInfraredDetector = new QWidget();
        pageInfraredDetector->setObjectName(QString::fromUtf8("pageInfraredDetector"));
        pageInfraredDetector->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(pageInfraredDetector);
        btnViscometer = new QPushButton(HistoryRecords);
        btnViscometer->setObjectName(QString::fromUtf8("btnViscometer"));
        btnViscometer->setGeometry(QRect(10, 30, 180, 60));
        btnViscometer->setStyleSheet(QString::fromUtf8(""));
        btnParticleCounter = new QPushButton(HistoryRecords);
        btnParticleCounter->setObjectName(QString::fromUtf8("btnParticleCounter"));
        btnParticleCounter->setGeometry(QRect(10, 110, 180, 60));
        btnParticleCounter->setStyleSheet(QString::fromUtf8(""));
        btnInfraredDetector = new QPushButton(HistoryRecords);
        btnInfraredDetector->setObjectName(QString::fromUtf8("btnInfraredDetector"));
        btnInfraredDetector->setGeometry(QRect(10, 190, 180, 60));
        btnInfraredDetector->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(HistoryRecords);

        QMetaObject::connectSlotsByName(HistoryRecords);
    } // setupUi

    void retranslateUi(QWidget *HistoryRecords)
    {
        HistoryRecords->setWindowTitle(QCoreApplication::translate("HistoryRecords", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        btnBack->setText(QCoreApplication::translate("HistoryRecords", "\350\277\224\345\233\236", nullptr));
        label_15->setText(QCoreApplication::translate("HistoryRecords", "\346\240\267  \345\223\201  \345\220\215", nullptr));
        label_16->setText(QCoreApplication::translate("HistoryRecords", "\345\270\270       \346\225\260", nullptr));
        label_17->setText(QCoreApplication::translate("HistoryRecords", "\350\220\275\346\240\267\346\227\266\351\227\264", nullptr));
        label_18->setText(QCoreApplication::translate("HistoryRecords", "\350\277\220\345\212\250\347\262\230\345\272\246", nullptr));
        label_19->setText(QCoreApplication::translate("HistoryRecords", "\346\265\213\350\257\225\346\270\251\345\272\246", nullptr));
        label_20->setText(QCoreApplication::translate("HistoryRecords", "\346\265\213\350\257\225\346\227\266\351\227\264", nullptr));
        label_21->setText(QCoreApplication::translate("HistoryRecords", "mm\302\262/S\302\262", nullptr));
        label_22->setText(QCoreApplication::translate("HistoryRecords", "S", nullptr));
        label_23->setText(QCoreApplication::translate("HistoryRecords", "mm\302\262/S", nullptr));
        label_24->setText(QCoreApplication::translate("HistoryRecords", "\302\260C", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        label_25->setText(QCoreApplication::translate("HistoryRecords", "\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
        btnViscometer->setText(QCoreApplication::translate("HistoryRecords", "\347\262\230\345\272\246\344\273\252", nullptr));
        btnParticleCounter->setText(QCoreApplication::translate("HistoryRecords", "\351\242\227\347\262\222\350\256\241\346\225\260\345\231\250", nullptr));
        btnInfraredDetector->setText(QCoreApplication::translate("HistoryRecords", "\347\272\242\345\244\226\346\243\200\346\265\213\344\273\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryRecords: public Ui_HistoryRecords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYRECORDS_H

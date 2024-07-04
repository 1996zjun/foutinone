#include "historyrecords.h"
#include "ui_historyrecords.h"
#include "StepOne.h"
#include <QPainter>

HistoryRecords::HistoryRecords(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoryRecords)
{
    ui->setupUi(this);

    // Set up styles
    setStyleSheet(
                  "QWidget#centralWidget { background-color: white; border-radius: 10px; }"
                  "QPushButton { background-color: #f0f0f0; padding: 10px; border: none; border-radius: 4px; font-size: 18px;font-style: normal;}"
                  "QPushButton:pressed { background-color: #005AE7; }");



    // Connect buttons to slots
    connect(ui->btnViscometer, &QPushButton::clicked, this, &HistoryRecords::showViscometer);
    connect(ui->btnParticleCounter, &QPushButton::clicked, this, &HistoryRecords::showParticleCounter);
    connect(ui->btnInfraredDetector, &QPushButton::clicked, this, &HistoryRecords::showInfraredDetector);
    connect(ui->btnBack, &QPushButton::clicked, this, &HistoryRecords::goBack);

    // Set initial page
    ui->stackedWidget->setCurrentIndex(0);
    ui->btnViscometer->setStyleSheet("background-color: #005AE7; color: #fff; font-weight: bold;");
}

void HistoryRecords::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}


HistoryRecords::~HistoryRecords()
{
    delete ui;
}

void HistoryRecords::showViscometer() {
    ui->stackedWidget->setCurrentIndex(0);
    resetButtonStyles();
    ui->btnViscometer->setStyleSheet("background-color: #005AE7; color: #fff; font-weight: bold;");
}

void HistoryRecords::showParticleCounter() {
    ui->stackedWidget->setCurrentIndex(1);
    resetButtonStyles();
    ui->btnParticleCounter->setStyleSheet("background-color: #005AE7; color: #fff; font-weight: bold;");
}

void HistoryRecords::showInfraredDetector() {
    ui->stackedWidget->setCurrentIndex(2);
    resetButtonStyles();
    ui->btnInfraredDetector->setStyleSheet("background-color: #005AE7; color: #fff; font-weight: bold;");
}

void HistoryRecords::goBack() {
    // Implement your back navigation logic here
    StepOne *stepOne = new StepOne();
    stepOne->show();
    this->close();

}

void HistoryRecords::resetButtonStyles() {
    ui->btnViscometer->setStyleSheet("");
    ui->btnParticleCounter->setStyleSheet("");
    ui->btnInfraredDetector->setStyleSheet("");
}

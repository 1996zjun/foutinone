#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testButton_clicked()
{
    QMessageBox::information(this, "Test", "Test button clisssssssssssssssssscked");
}

void MainWindow::on_logoutButton_clicked()
{
    emit logout();
    this->close();
}

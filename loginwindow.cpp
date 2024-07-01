#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include "StepOne.h"
#include <QMessageBox>
#include <QPainter>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    if (username == "user" && password == "123456") {
        StepOne *stepone = new StepOne();
        stepone->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Login Failed", "cuowu le ");
    }
}

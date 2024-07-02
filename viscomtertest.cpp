#include "viscomtertest.h"
#include "ui_viscomtertest.h"
#include <QPainter>


ViscomterTest::ViscomterTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ViscomterTest)
{
    ui->setupUi(this);
}

ViscomterTest::~ViscomterTest()
{
    delete ui;
}


void ViscomterTest::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}


#include "viscomtermodule.h"
void ViscomterTest::on_backButton_clicked()
{

    ViscomterModule *module = new ViscomterModule();
    module->show();
    this->close();
}

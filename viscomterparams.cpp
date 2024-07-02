#include "viscomterparams.h"
#include "ui_viscomterparams.h"
#include <QPainter>

ViscomterParams::ViscomterParams(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ViscomterParams)
{
    ui->setupUi(this);
}

ViscomterParams::~ViscomterParams()
{
    delete ui;
}

void ViscomterParams::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}


#include "viscomtermodule.h"
void ViscomterParams::on_backButton_clicked()
{

    ViscomterModule *module = new ViscomterModule();
    module->show();
    this->close();
}

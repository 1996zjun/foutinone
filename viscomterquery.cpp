#include "viscomterquery.h"
#include "ui_viscomterquery.h"
#include <QPainter>

ViscomterQuery::ViscomterQuery(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ViscomterQuery)
{
    ui->setupUi(this);
}

ViscomterQuery::~ViscomterQuery()
{
    delete ui;
}

void ViscomterQuery::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}

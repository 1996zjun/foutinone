#include "viscomterquery.h"
#include "ui_viscomterquery.h"

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

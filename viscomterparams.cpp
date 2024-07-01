#include "viscomterparams.h"
#include "ui_viscomterparams.h"

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

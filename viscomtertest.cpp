#include "viscomtertest.h"
#include "ui_viscomtertest.h"

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

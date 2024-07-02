#include "particlecountertest.h"
#include "ui_particlecountertest.h"
#include <QPainter>

ParticleCounterTest::ParticleCounterTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ParticleCounterTest)
{
    ui->setupUi(this);
}

ParticleCounterTest::~ParticleCounterTest()
{
    delete ui;
}

void ParticleCounterTest::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}



#include "particlecountermodule.h"
void ParticleCounterTest::on_backButton_clicked()
{

    ParticleCounterModule *module = new ParticleCounterModule();
    module->show();
    this->close();
}

#include "particlecounterparams.h"
#include "ui_particlecounterparams.h"
#include <QPainter>

ParticleCounterParams::ParticleCounterParams(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ParticleCounterParams)
{
    ui->setupUi(this);
}

ParticleCounterParams::~ParticleCounterParams()
{
    delete ui;
}

void ParticleCounterParams::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/bg.png"));
}



#include "particlecountermodule.h"
void ParticleCounterParams::on_backButton_clicked()
{

    ParticleCounterModule *module = new ParticleCounterModule();
    module->show();
    this->close();
}

#include "particlecounterparams.h"
#include "ui_particlecounterparams.h"

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

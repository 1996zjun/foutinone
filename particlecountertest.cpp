#include "particlecountertest.h"
#include "ui_particlecountertest.h"

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

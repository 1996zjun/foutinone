#ifndef PARTICLECOUNTERTEST_H
#define PARTICLECOUNTERTEST_H

#include <QWidget>

namespace Ui {
class ParticleCounterTest;
}

class ParticleCounterTest : public QWidget
{
    Q_OBJECT

public:
    explicit ParticleCounterTest(QWidget *parent = nullptr);
    ~ParticleCounterTest();

private:
    Ui::ParticleCounterTest *ui;
};

#endif // PARTICLECOUNTERTEST_H

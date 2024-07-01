#ifndef PARTICLECOUNTERPARAMS_H
#define PARTICLECOUNTERPARAMS_H

#include <QWidget>

namespace Ui {
class ParticleCounterParams;
}

class ParticleCounterParams : public QWidget
{
    Q_OBJECT

public:
    explicit ParticleCounterParams(QWidget *parent = nullptr);
    ~ParticleCounterParams();

private:
    Ui::ParticleCounterParams *ui;
};

#endif // PARTICLECOUNTERPARAMS_H

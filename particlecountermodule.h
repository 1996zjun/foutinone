#ifndef PARTICLECOUNTERMODULE_H
#define PARTICLECOUNTERMODULE_H

#include <QWidget>
#include <QPushButton>

class ParticleCounterModule : public QWidget
{
    Q_OBJECT

public:
    ParticleCounterModule(QWidget *parent = nullptr);

private slots:
    void on_sampleDetectionButtonClicked();
    void on_parameterSettingButtonClicked();
    void on_backButtonClicked();

private:
    QPushButton *sampleDetectionButton;
    QPushButton *parameterSettingButton;
};

#endif // PARTICLECOUNTERMODULE_H

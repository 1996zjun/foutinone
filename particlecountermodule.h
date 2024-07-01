#ifndef PARTICLECOUNTERMODULE_H
#define PARTICLECOUNTERMODULE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QImage>
#include <QPixmap>
#include <QLabel>

class ParticleCounterModule : public QWidget
{
    Q_OBJECT

public:
    ParticleCounterModule(QWidget *parent = nullptr);

private slots:
    void on_sampleDetectionButtonClicked();
    void on_parameterSettingButtonClicked();

private:
    QPushButton *sampleDetectionButton;
    QPushButton *parameterSettingButton;
    QLabel *toplabel;
};

#endif // PARTICLECOUNTERMODULE_H

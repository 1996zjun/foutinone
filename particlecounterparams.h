#ifndef PARTICLECOUNTERPARAMS_H
#define PARTICLECOUNTERPARAMS_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class ParticleCounterParams;
}

class ParticleCounterParams : public QWidget
{
    Q_OBJECT

public:
    explicit ParticleCounterParams(QWidget *parent = nullptr);
    ~ParticleCounterParams();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backButton_clicked();

private:
    Ui::ParticleCounterParams *ui;
};

#endif // PARTICLECOUNTERPARAMS_H

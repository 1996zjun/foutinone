#ifndef PARTICLECOUNTERTEST_H
#define PARTICLECOUNTERTEST_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class ParticleCounterTest;
}

class ParticleCounterTest : public QWidget
{
    Q_OBJECT

public:
    explicit ParticleCounterTest(QWidget *parent = nullptr);
    ~ParticleCounterTest();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backButton_clicked();

private:
    Ui::ParticleCounterTest *ui;
};

#endif // PARTICLECOUNTERTEST_H

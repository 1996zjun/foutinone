#ifndef HISTORYRECORDS_H
#define HISTORYRECORDS_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class HistoryRecords;
}

class HistoryRecords : public QWidget
{
    Q_OBJECT

public:
    explicit HistoryRecords(QWidget *parent = nullptr);
    ~HistoryRecords();
    void paintEvent(QPaintEvent *event);

private slots:
    void showViscometer();
    void showParticleCounter();
    void showInfraredDetector();
    void goBack();

private:
    void resetButtonStyles();
    Ui::HistoryRecords *ui;
};

#endif // HISTORYRECORDS_H

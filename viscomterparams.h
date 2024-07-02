#ifndef VISCOMTERPARAMS_H
#define VISCOMTERPARAMS_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class ViscomterParams;
}

class ViscomterParams : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterParams(QWidget *parent = nullptr);
    ~ViscomterParams();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backButton_clicked();


private:
    Ui::ViscomterParams *ui;
};

#endif // VISCOMTERPARAMS_H

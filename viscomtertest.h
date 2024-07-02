#ifndef VISCOMTERTEST_H
#define VISCOMTERTEST_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class ViscomterTest;
}

class ViscomterTest : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterTest(QWidget *parent = nullptr);
    ~ViscomterTest();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backButton_clicked();

private:
    Ui::ViscomterTest *ui;
};

#endif // VISCOMTERTEST_H

#ifndef VISCOMTERTEST_H
#define VISCOMTERTEST_H

#include <QWidget>

namespace Ui {
class ViscomterTest;
}

class ViscomterTest : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterTest(QWidget *parent = nullptr);
    ~ViscomterTest();

private:
    Ui::ViscomterTest *ui;
};

#endif // VISCOMTERTEST_H

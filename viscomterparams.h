#ifndef VISCOMTERPARAMS_H
#define VISCOMTERPARAMS_H

#include <QWidget>

namespace Ui {
class ViscomterParams;
}

class ViscomterParams : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterParams(QWidget *parent = nullptr);
    ~ViscomterParams();

private:
    Ui::ViscomterParams *ui;
};

#endif // VISCOMTERPARAMS_H

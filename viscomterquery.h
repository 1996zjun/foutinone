#ifndef VISCOMTERQUERY_H
#define VISCOMTERQUERY_H

#include <QWidget>

namespace Ui {
class ViscomterQuery;
}

class ViscomterQuery : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterQuery(QWidget *parent = nullptr);
    ~ViscomterQuery();

private:
    Ui::ViscomterQuery *ui;
};

#endif // VISCOMTERQUERY_H

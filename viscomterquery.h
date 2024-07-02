#ifndef VISCOMTERQUERY_H
#define VISCOMTERQUERY_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class ViscomterQuery;
}

class ViscomterQuery : public QWidget
{
    Q_OBJECT

public:
    explicit ViscomterQuery(QWidget *parent = nullptr);
    ~ViscomterQuery();
    void paintEvent(QPaintEvent *event);


private:
    Ui::ViscomterQuery *ui;
};



#endif // VISCOMTERQUERY_H

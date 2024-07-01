#ifndef STEPONE_H
#define STEPONE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QImage>
#include <QPixmap>
#include <QMessageBox>

class StepOne : public QWidget
{
    Q_OBJECT

public:
    explicit StepOne(QWidget *parent = nullptr);

private slots:
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button4_clicked();
    void on_historyBtn_clicked();
    void on_systemBtn_clicked();

private:
    QVBoxLayout *layout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *historyBtn;
    QPushButton *systemBtn;
};

#endif // STEPONE_H

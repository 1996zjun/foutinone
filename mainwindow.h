#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPainter>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);

signals:
    void logout();

private slots:
    void on_testButton_clicked();
    void on_logoutButton_clicked();

private:
    Ui::MainWindow *ui;
    QChartView *chartView;
};

#endif // MAINWINDOW_H

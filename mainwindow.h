#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

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

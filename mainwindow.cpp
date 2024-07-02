#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建一个折线系列
    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);

    // 创建一个图表
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("简单的折线图示例");

    // 将图表嵌入到 ChartView 中
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // 将 ChartView 添加到 Tab 1 中
    // ui->tabWidget->widget(0)->layout()->addWidget(chartView);

    // 确保 Tab 1 有一个布局管理器
    QWidget *tab3 = ui->tabWidget->widget(2);
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(tab3->layout());
    if (!layout) {
        layout = new QVBoxLayout(tab3);
        tab3->setLayout(layout);
    }

    // 将 ChartView 添加到 Tab 1 中
    layout->addWidget(chartView);
    chartView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testButton_clicked()
{
    QMessageBox::information(this, "Test", "Test button clisssssssssssssssssscked");
}

void MainWindow::on_logoutButton_clicked()
{
    emit logout();
    this->close();
}

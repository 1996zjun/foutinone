#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
};

#endif // MAINWINDOW_H

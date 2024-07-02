#ifndef VISCOMTERMODULE_H
#define VISCOMTERMODULE_H

#include <QWidget>
#include <QPushButton>

class ViscomterModule : public QWidget
{
    Q_OBJECT

public:
    ViscomterModule(QWidget *parent = nullptr);

private slots:
    void on_sampleDetectionButtonClicked();
    void on_parameterSettingButtonClicked();
    void on_backButtonClicked();

private:
    QPushButton *sampleDetectionButton;
    QPushButton *parameterSettingButton;
};

#endif // VISCOMTERMODULE_H

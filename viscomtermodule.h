#ifndef VISCOMTERMODULE_H
#define VISCOMTERMODULE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QImage>
#include <QPixmap>
#include <QLabel>

class ViscomterModule : public QWidget
{
    Q_OBJECT

public:
    ViscomterModule(QWidget *parent = nullptr);

private slots:
    void on_sampleDetectionButtonClicked();
    void on_parameterSettingButtonClicked();

private:
    QPushButton *sampleDetectionButton;
    QPushButton *parameterSettingButton;
};

#endif // VISCOMTERMODULE_H

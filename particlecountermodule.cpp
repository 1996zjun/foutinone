#include "particlecountermodule.h"
#include "particlecountertest.h"
#include "particlecounterparams.h"
#include "StepOne.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QPalette>
#include <QBrush>
#include <QFont>

ParticleCounterModule::ParticleCounterModule(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1024, 768);
    setWindowTitle("颗粒计数器");

    QImage image(":/images/bg.png");
    QPixmap pixmap = QPixmap::fromImage(image);
    QPixmap bgpixmap = pixmap.scaled(width(), height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(bgpixmap));
    setPalette(palette);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // 创建返回按钮
    QPushButton *backButton = new QPushButton("返回");
    backButton->setFixedSize(100, 50);
    backButton->setStyleSheet("QPushButton { background: #FF6347; color: #fff; font-weight: bold; }");

    // 创建一个新的水平布局用于容纳返回按钮，并使其左对齐
    QHBoxLayout *topLayout = new QHBoxLayout;
    topLayout->addWidget(backButton);
    topLayout->addStretch();

    QLabel *titleLabel = new QLabel("颗粒计数器");
    QFont titleFont;
    titleFont.setBold(true);
    titleFont.setPointSize(30);
    titleLabel->setFont(titleFont);
    titleLabel->setAlignment(Qt::AlignHCenter);

    QVBoxLayout *titleLayout = new QVBoxLayout;
    titleLayout->addLayout(topLayout);  // 将返回按钮的布局添加到标题布局
    titleLayout->addWidget(titleLabel);  // 将标题添加到标题布局
    titleLayout->addSpacing(20);  // 添加一点间距

    QHBoxLayout *btnLayout = new QHBoxLayout;
    sampleDetectionButton = new QPushButton("样品检测");
    sampleDetectionButton->setFixedSize(200, 200);
    parameterSettingButton = new QPushButton("参数设置");
    parameterSettingButton->setFixedSize(200, 200);

    sampleDetectionButton->setStyleSheet("QPushButton { background: #005AE7; color:#fff; font-weight: bold; font-size: 20px;}");
    parameterSettingButton->setStyleSheet("QPushButton { background: #005AE7; color:#fff; font-weight: bold; font-size: 20px;}");

    btnLayout->addWidget(sampleDetectionButton);
    btnLayout->addWidget(parameterSettingButton);

    QVBoxLayout *contentLayout = new QVBoxLayout;
    contentLayout->addLayout(btnLayout);

    mainLayout->addLayout(titleLayout);  // 将标题布局添加到主布局
    mainLayout->addStretch();
    mainLayout->addLayout(contentLayout);
    mainLayout->addStretch();

    connect(backButton, &QPushButton::clicked, this, &ParticleCounterModule::on_backButtonClicked);
    connect(sampleDetectionButton, &QPushButton::clicked, this, &ParticleCounterModule::on_sampleDetectionButtonClicked);
    connect(parameterSettingButton, &QPushButton::clicked, this, &ParticleCounterModule::on_parameterSettingButtonClicked);
}

void ParticleCounterModule::on_sampleDetectionButtonClicked()
{
    ParticleCounterTest *parttest = new ParticleCounterTest();
    parttest->show();
    this->close();
}

void ParticleCounterModule::on_parameterSettingButtonClicked()
{
    ParticleCounterParams *partParams = new ParticleCounterParams();
    partParams->show();
    this->close();
}

void ParticleCounterModule::on_backButtonClicked()
{
    StepOne *stepOne = new StepOne();
    stepOne->show();
    this->close();
}

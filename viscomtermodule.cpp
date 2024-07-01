#include "viscomtermodule.h"
#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>

ViscomterModule::ViscomterModule(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1024, 768);

    QImage image(":/images/bg.png");  // 请将 "your_image.jpg" 替换为实际的图片文件名
    QPixmap pixmap = QPixmap::fromImage(image);
    QPixmap bgpixmap = pixmap.scaled(width(), height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(bgpixmap));
    setPalette(palette);


    QVBoxLayout *mainLayout = new QVBoxLayout(this);  // 使用 QVBoxLayout 来垂直排列元素

    QLabel *titleLabel = new QLabel("粘度仪模块");  // 创建标题标签
    QFont titleFont;
    titleFont.setBold(true);
    titleFont.setPointSize(30);
    titleLabel->setFont(titleFont);
    titleLabel->setAlignment(Qt::AlignHCenter);  // 设置文字水平居中


    mainLayout->addWidget(titleLabel);  // 将标题添加到布局


    QHBoxLayout *layout = new QHBoxLayout(this);

    sampleDetectionButton = new QPushButton("样品检测");
    sampleDetectionButton->setFixedSize(200, 200);
    parameterSettingButton = new QPushButton("参数设置");
    parameterSettingButton->setFixedSize(200, 200);

    sampleDetectionButton->setStyleSheet("QPushButton { background: #005AE7; color:#fff; font-weight: bold; font-size: 20px;}");
    parameterSettingButton->setStyleSheet("QPushButton { background: #005AE7; color:#fff; font-weight: bold; font-size: 20px;}");

    layout->addWidget(sampleDetectionButton);
    layout->addWidget(parameterSettingButton);

    // 创建一个新的垂直布局用于容纳标题和按钮水平布局，并实现垂直居中
    QVBoxLayout *contentLayout = new QVBoxLayout;
    contentLayout->addWidget(titleLabel);
    contentLayout->addSpacing(100);  // 标题和按钮之间的间距
    contentLayout->addLayout(layout);

    // 在 mainLayout 中添加 contentLayout，并添加上下的伸缩项以实现垂直居中
    mainLayout->addStretch();
    mainLayout->addLayout(contentLayout);
    mainLayout->addStretch();


    connect(sampleDetectionButton, &QPushButton::clicked, this, &ViscomterModule::on_sampleDetectionButtonClicked);
    connect(parameterSettingButton, &QPushButton::clicked, this, &ViscomterModule::on_parameterSettingButtonClicked);
}

void ViscomterModule::on_sampleDetectionButtonClicked()
{
    // 在此处编写跳转到样品检测新界面的代码
    QMessageBox::information(this, "跳转", "跳转到样品检测界面");
}

void ViscomterModule::on_parameterSettingButtonClicked()
{
    // 在此处编写跳转到参数设置新界面的代码
    QMessageBox::information(this, "跳转", "跳转到参数设置界面");
}

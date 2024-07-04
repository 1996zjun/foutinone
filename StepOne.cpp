#include "StepOne.h"

StepOne::StepOne(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1024, 768);  // 设置窗口固定大小
    setWindowTitle("主界面");

    // 加载背景图片
    QImage image(":/images/bg.png");  // 请将 "your_image.jpg" 替换为实际的图片文件名
    QPixmap pixmap = QPixmap::fromImage(image);
    QPixmap bgpixmap = pixmap.scaled(width(), height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(bgpixmap));
    setPalette(palette);

    // 创建按钮并设置固定宽度为 300 像素
    QPushButton *button1 = new QPushButton("粘度仪功能");
    QPushButton *button2 = new QPushButton("颗粒计数器");
    QPushButton *button3 = new QPushButton("X 荧光检测");
    QPushButton *button4 = new QPushButton("红外检测");
    QPushButton *historyBtn = new QPushButton("历史记录");
    QPushButton *systemBtn = new QPushButton("系统设置");

    QList<QPushButton*> buttons = {button1, button2, button3, button4, historyBtn, systemBtn};
    foreach(QPushButton* button, buttons) {
        button->setFixedWidth(300);
        button->setStyleSheet("QPushButton { background: #005AE7; }");
    }

    // 垂直布局，用于将按钮垂直排列
    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->setAlignment(Qt::AlignVCenter);  // 垂直居中
    vLayout->setSpacing(20);  // 设置按钮之间的间距
    vLayout->addWidget(button1);
    vLayout->addWidget(button2);
    vLayout->addWidget(button3);
    vLayout->addWidget(button4);
    vLayout->addWidget(historyBtn);
    vLayout->addWidget(systemBtn);

    // 水平布局，用于将垂直布局居中
    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addStretch();  // 添加一个伸缩空间，将按钮布局推到中心
    hLayout->addLayout(vLayout);
    hLayout->addStretch();  // 添加一个伸缩空间，将按钮布局推到中心

    // 连接按钮的点击信号和对应的槽函数
    connect(button1, &QPushButton::clicked, this, &StepOne::on_button1_clicked);
    connect(button2, &QPushButton::clicked, this, &StepOne::on_button2_clicked);
    connect(button3, &QPushButton::clicked, this, &StepOne::on_button3_clicked);
    connect(button4, &QPushButton::clicked, this, &StepOne::on_button4_clicked);
    connect(historyBtn, &QPushButton::clicked, this, &StepOne::on_historyBtn_clicked);
    connect(systemBtn, &QPushButton::clicked, this, &StepOne::on_systemBtn_clicked);
}

#include "viscomtermodule.h"
void StepOne::on_button1_clicked()
{
    ViscomterModule *vmodule = new ViscomterModule();
    vmodule->show();
    this->close();
}

#include "particlecountermodule.h"
void StepOne::on_button2_clicked()
{
    ParticleCounterModule *pmodule = new ParticleCounterModule();
    pmodule->show();
    this->close();
}

void StepOne::on_button3_clicked()
{
    QMessageBox::information(this, "提示", "X荧光检测暂未开放");
}

#include "mainwindow.h"
void StepOne::on_button4_clicked()
{
    MainWindow *mainwindow = new MainWindow();
    mainwindow->show();
    this->close();
}

#include "historyrecords.h"
void StepOne::on_historyBtn_clicked()
{
    // QMessageBox::information(this, "提示", "您点击了历史记录");
    HistoryRecords *he = new HistoryRecords();
    he->show();
    this->close();
}

void StepOne::on_systemBtn_clicked()
{
    QMessageBox::information(this, "提示", "系统设置暂未开放");
}

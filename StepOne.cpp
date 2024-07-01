#include "StepOne.h"

StepOne::StepOne(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1024, 768);  // 设置窗口固定大小
    // 加载背景图片
    QImage image(":/images/bg.png");  // 请将 "your_image.jpg" 替换为实际的图片文件名
    QPixmap pixmap = QPixmap::fromImage(image);
    QPixmap bgpixmap = pixmap.scaled(width(), height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(bgpixmap));
    setPalette(palette);


    QVBoxLayout *layout = new QVBoxLayout(this);  // 垂直布局
    layout->setAlignment(Qt::AlignVCenter);  // 垂直居中

    QPushButton *button1 = new QPushButton("粘度仪功能");
    QPushButton *button2 = new QPushButton("颗粒计数器");
    QPushButton *button3 = new QPushButton("X 荧光检测");
    QPushButton *button4 = new QPushButton("红外检测");
    QPushButton *historyBtn = new QPushButton("历史记录");
    QPushButton *systemBtn = new QPushButton("系统设置");


    // 设置按钮样式为渐变色蓝到白
    button1->setStyleSheet("QPushButton { background: #005AE7;}");
    button2->setStyleSheet("QPushButton { background: #005AE7; }");
    button3->setStyleSheet("QPushButton { background: #005AE7; }");
    button4->setStyleSheet("QPushButton { background: #005AE7; }");
    historyBtn->setStyleSheet("QPushButton { background: #005AE7; }");
    systemBtn->setStyleSheet("QPushButton { background: #005AE7; }");

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);

    layout->addWidget(historyBtn);
    layout->addWidget(systemBtn);

    // 连接按钮的点击信号和对应的槽函数
    connect(button1, &QPushButton::clicked, this, &StepOne::on_button1_clicked);
    connect(button2, &QPushButton::clicked, this, &StepOne::on_button2_clicked);
    connect(button3, &QPushButton::clicked, this, &StepOne::on_button3_clicked);
    connect(button4, &QPushButton::clicked, this, &StepOne::on_button4_clicked);

    connect(historyBtn, &QPushButton::clicked, this, &StepOne::on_historyBtn_clicked);

    connect(systemBtn, &QPushButton::clicked, this, &StepOne::on_systemBtn_clicked);
}

void StepOne::on_button1_clicked()
{
    QMessageBox::information(this, "提示", "您点击了粘度仪功能按钮");
}

void StepOne::on_button2_clicked()
{
    QMessageBox::information(this, "提示", "您点击了颗粒计数器按钮");
}

void StepOne::on_button3_clicked()
{
    QMessageBox::information(this, "提示", "您点击了 X 荧光检测按钮");
}

void StepOne::on_button4_clicked()
{
    QMessageBox::information(this, "提示", "您点击了红外检测按钮");
}


void StepOne::on_historyBtn_clicked()
{
    QMessageBox::information(this, "提示", "您点击了历史记录");
}


void StepOne::on_systemBtn_clicked()
{
    QMessageBox::information(this, "提示", "您点击了系统设置");
}

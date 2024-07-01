/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *containBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1024, 768);
        LoginWindow->setLayoutDirection(Qt::RightToLeft);
        LoginWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_1 = new QVBoxLayout(LoginWindow);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 180, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        containBox = new QWidget(LoginWindow);
        containBox->setObjectName(QString::fromUtf8("containBox"));
        containBox->setMinimumSize(QSize(0, 350));
        containBox->setMaximumSize(QSize(16777215, 400));
        containBox->setStyleSheet(QString::fromUtf8("width: 327px;\n"
"height: 470px;\n"
"background: #FEFFFE;\n"
"border-radius: 10px;"));
        verticalLayout = new QVBoxLayout(containBox);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(containBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-weight: 800;\n"
"font-size:32px;\n"
"color: #21272B;\n"
"line-height: 40px;\n"
"text-align: left;\n"
"font-style: normal;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        usernameLineEdit = new QLineEdit(containBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setEnabled(true);
        usernameLineEdit->setMinimumSize(QSize(0, 50));
        usernameLineEdit->setMaximumSize(QSize(16777215, 50));
        usernameLineEdit->setAcceptDrops(true);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("background: #FEFFFE;\n"
"border: 0;\n"
"font-weight: 800;\n"
"font-size: 16px;\n"
"color: #94999E;\n"
"text-align: left;\n"
"font-style: normal;"));

        verticalLayout->addWidget(usernameLineEdit);

        passwordLineEdit = new QLineEdit(containBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("\n"
"height: 50px;\n"
"background: #FEFFFE;\n"
"border: 0;\n"
"font-weight: 800;\n"
"font-size: 16px;\n"
"color: #94999E;\n"
"text-align: left;\n"
"font-style: normal;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        loginButton = new QPushButton(containBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"height: 50px;\n"
"background: #005AE7;\n"
"border-radius: 4px;\n"
"font-weight: 800;\n"
"font-size: 16px;\n"
"color: #FFFFFE;\n"
"text-align: center;\n"
"font-style: normal;"));

        verticalLayout->addWidget(loginButton);


        horizontalLayout->addWidget(containBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_1->addLayout(verticalLayout_2);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\344\275\277\347\224\250", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

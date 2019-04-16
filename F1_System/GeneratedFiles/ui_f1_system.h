/********************************************************************************
** Form generated from reading UI file 'f1_system.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F1_SYSTEM_H
#define UI_F1_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_F1_SystemClass
{
public:
    QWidget *centralWidget;
    QLabel *titleLabel;
    QGroupBox *groupBox;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLineEdit *usernameInputField;
    QLineEdit *passwordInputField;
    QPushButton *loginPushButton;
    QLabel *label;

    void setupUi(QMainWindow *F1_SystemClass)
    {
        if (F1_SystemClass->objectName().isEmpty())
            F1_SystemClass->setObjectName(QStringLiteral("F1_SystemClass"));
        F1_SystemClass->resize(621, 442);
        F1_SystemClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(F1_SystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("\n"
"	background-image: url(../backgroundLogin.jpg);"));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(10, 60, 601, 71));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QLatin1String("background: none;\n"
"color: white;\n"
""));
        titleLabel->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 120, 320, 161));
        QFont font1;
        font1.setPointSize(8);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 0;"));
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(15, 20, 100, 25));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        usernameLabel->setFont(font2);
        usernameLabel->setStyleSheet(QStringLiteral("color: red;"));
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(15, 60, 100, 25));
        passwordLabel->setFont(font2);
        passwordLabel->setStyleSheet(QStringLiteral("color: red;"));
        usernameInputField = new QLineEdit(groupBox);
        usernameInputField->setObjectName(QStringLiteral("usernameInputField"));
        usernameInputField->setGeometry(QRect(115, 20, 190, 25));
        QFont font3;
        font3.setPointSize(14);
        usernameInputField->setFont(font3);
        usernameInputField->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background: white;\n"
""));
        passwordInputField = new QLineEdit(groupBox);
        passwordInputField->setObjectName(QStringLiteral("passwordInputField"));
        passwordInputField->setGeometry(QRect(115, 60, 190, 25));
        passwordInputField->setFont(font3);
        passwordInputField->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"background: white;\n"
""));
        passwordInputField->setEchoMode(QLineEdit::Password);
        loginPushButton = new QPushButton(groupBox);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));
        loginPushButton->setGeometry(QRect(120, 95, 80, 31));
        loginPushButton->setStyleSheet(QStringLiteral("background: red; color: white;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 290, 321, 81));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("background: transparent; color: white;"));
        label->setAlignment(Qt::AlignCenter);
        F1_SystemClass->setCentralWidget(centralWidget);

        retranslateUi(F1_SystemClass);

        QMetaObject::connectSlotsByName(F1_SystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *F1_SystemClass)
    {
        F1_SystemClass->setWindowTitle(QApplication::translate("F1_SystemClass", "F1 Tournament Management System", nullptr));
        titleLabel->setText(QApplication::translate("F1_SystemClass", "F1 Management System", nullptr));
        groupBox->setTitle(QString());
        usernameLabel->setText(QApplication::translate("F1_SystemClass", "Username", nullptr));
        passwordLabel->setText(QApplication::translate("F1_SystemClass", "Password", nullptr));
        loginPushButton->setText(QApplication::translate("F1_SystemClass", "Login", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class F1_SystemClass: public Ui_F1_SystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F1_SYSTEM_H

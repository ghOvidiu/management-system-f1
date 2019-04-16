/********************************************************************************
** Form generated from reading UI file 'welcomePage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcomePage
{
public:
    QLabel *titleLabel;
    QPushButton *addNewTournamentPushButton;
    QPushButton *adminPanelPushButton;
    QPushButton *statisticsPushButton;

    void setupUi(QDialog *welcomePage)
    {
        if (welcomePage->objectName().isEmpty())
            welcomePage->setObjectName(QStringLiteral("welcomePage"));
        welcomePage->resize(520, 450);
        welcomePage->setStyleSheet(QStringLiteral("background-image: url(../untitled.jpg)"));
        titleLabel = new QLabel(welcomePage);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, 0, 521, 121));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QStringLiteral("color: white;"));
        titleLabel->setTextFormat(Qt::PlainText);
        titleLabel->setScaledContents(false);
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        addNewTournamentPushButton = new QPushButton(welcomePage);
        addNewTournamentPushButton->setObjectName(QStringLiteral("addNewTournamentPushButton"));
        addNewTournamentPushButton->setGeometry(QRect(10, 230, 500, 40));
        addNewTournamentPushButton->setStyleSheet(QStringLiteral("background: white;"));
        adminPanelPushButton = new QPushButton(welcomePage);
        adminPanelPushButton->setObjectName(QStringLiteral("adminPanelPushButton"));
        adminPanelPushButton->setGeometry(QRect(10, 300, 500, 40));
        adminPanelPushButton->setStyleSheet(QStringLiteral("background: white;"));
        statisticsPushButton = new QPushButton(welcomePage);
        statisticsPushButton->setObjectName(QStringLiteral("statisticsPushButton"));
        statisticsPushButton->setGeometry(QRect(10, 370, 500, 40));
        statisticsPushButton->setStyleSheet(QStringLiteral("background: white;"));

        retranslateUi(welcomePage);

        QMetaObject::connectSlotsByName(welcomePage);
    } // setupUi

    void retranslateUi(QDialog *welcomePage)
    {
        welcomePage->setWindowTitle(QApplication::translate("welcomePage", "welcomePage", nullptr));
        titleLabel->setText(QApplication::translate("welcomePage", "Formula1 Tournament Management System", nullptr));
        addNewTournamentPushButton->setText(QApplication::translate("welcomePage", "Add New Tournament", nullptr));
        adminPanelPushButton->setText(QApplication::translate("welcomePage", "Admin panel", nullptr));
        statisticsPushButton->setText(QApplication::translate("welcomePage", "Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomePage: public Ui_welcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H

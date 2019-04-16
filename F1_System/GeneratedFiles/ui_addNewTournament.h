/********************************************************************************
** Form generated from reading UI file 'addNewTournament.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWTOURNAMENT_H
#define UI_ADDNEWTOURNAMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addNewTournament
{
public:
    QLabel *titleLabel;
    QLabel *nameOfTournamentLabel;
    QLabel *yearOfTournamentLabel;
    QLineEdit *nameOfTournamentInputField;
    QLineEdit *yearOfTournamentInputField;
    QPushButton *okPushButton;

    void setupUi(QDialog *addNewTournament)
    {
        if (addNewTournament->objectName().isEmpty())
            addNewTournament->setObjectName(QStringLiteral("addNewTournament"));
        addNewTournament->resize(610, 520);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        addNewTournament->setFont(font);
        addNewTournament->setStyleSheet(QStringLiteral("background-image: url(../backgroundTournament.jpg);"));
        titleLabel = new QLabel(addNewTournament);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, 0, 610, 91));
        QFont font1;
        font1.setPointSize(29);
        font1.setBold(true);
        font1.setWeight(75);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: white; background: none;"));
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        nameOfTournamentLabel = new QLabel(addNewTournament);
        nameOfTournamentLabel->setObjectName(QStringLiteral("nameOfTournamentLabel"));
        nameOfTournamentLabel->setGeometry(QRect(0, 250, 300, 40));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        nameOfTournamentLabel->setFont(font2);
        nameOfTournamentLabel->setStyleSheet(QStringLiteral("color: white; background: none;"));
        nameOfTournamentLabel->setAlignment(Qt::AlignCenter);
        yearOfTournamentLabel = new QLabel(addNewTournament);
        yearOfTournamentLabel->setObjectName(QStringLiteral("yearOfTournamentLabel"));
        yearOfTournamentLabel->setGeometry(QRect(0, 330, 300, 40));
        yearOfTournamentLabel->setFont(font2);
        yearOfTournamentLabel->setStyleSheet(QStringLiteral("color: white; background: none;"));
        yearOfTournamentLabel->setAlignment(Qt::AlignCenter);
        nameOfTournamentInputField = new QLineEdit(addNewTournament);
        nameOfTournamentInputField->setObjectName(QStringLiteral("nameOfTournamentInputField"));
        nameOfTournamentInputField->setGeometry(QRect(335, 255, 240, 30));
        QFont font3;
        font3.setPointSize(12);
        nameOfTournamentInputField->setFont(font3);
        nameOfTournamentInputField->setStyleSheet(QStringLiteral("background: none;"));
        yearOfTournamentInputField = new QLineEdit(addNewTournament);
        yearOfTournamentInputField->setObjectName(QStringLiteral("yearOfTournamentInputField"));
        yearOfTournamentInputField->setGeometry(QRect(335, 335, 240, 30));
        yearOfTournamentInputField->setFont(font3);
        yearOfTournamentInputField->setStyleSheet(QStringLiteral("background: none;"));
        okPushButton = new QPushButton(addNewTournament);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(255, 450, 100, 40));
        okPushButton->setStyleSheet(QStringLiteral("color: white; background: orange;"));

        retranslateUi(addNewTournament);

        QMetaObject::connectSlotsByName(addNewTournament);
    } // setupUi

    void retranslateUi(QDialog *addNewTournament)
    {
        addNewTournament->setWindowTitle(QApplication::translate("addNewTournament", "addNewTournament", nullptr));
        titleLabel->setText(QApplication::translate("addNewTournament", "Add a new tournament", nullptr));
        nameOfTournamentLabel->setText(QApplication::translate("addNewTournament", "Name of the tournament:", nullptr));
        yearOfTournamentLabel->setText(QApplication::translate("addNewTournament", "Year:", nullptr));
        okPushButton->setText(QApplication::translate("addNewTournament", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewTournament: public Ui_addNewTournament {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWTOURNAMENT_H

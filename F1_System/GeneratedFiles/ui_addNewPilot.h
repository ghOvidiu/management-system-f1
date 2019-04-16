/********************************************************************************
** Form generated from reading UI file 'addNewPilot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPILOT_H
#define UI_ADDNEWPILOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addNewPilot
{
public:
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *pilotFirstNameInput;
    QLabel *pilotFirstNameLabel;
    QLabel *pilotLastNameLabel;
    QLineEdit *pilotLastNameInput;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *pilotTitleLabel;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *teamHqLabel;
    QFrame *line_9;
    QLabel *teamNameLabel;
    QLabel *teamTitleLabel;
    QLineEdit *teamNameInput;
    QLineEdit *teamHqInput;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QLabel *carRegistrationNoLabel;
    QFrame *line_14;
    QLabel *carVinLabel;
    QLabel *carTitleLabel;
    QLineEdit *carVinInput;
    QLineEdit *carRegistrationNoInput;
    QFrame *line_15;
    QLabel *carPowerLabel;
    QLineEdit *carEngineCapacityInput;
    QLabel *carEngineCapacityLabel;
    QLineEdit *carPowerInput;

    void setupUi(QDialog *addNewPilot)
    {
        if (addNewPilot->objectName().isEmpty())
            addNewPilot->setObjectName(QStringLiteral("addNewPilot"));
        addNewPilot->resize(470, 320);
        cancelPushButton = new QPushButton(addNewPilot);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(110, 280, 75, 25));
        okPushButton = new QPushButton(addNewPilot);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(285, 280, 75, 25));
        line = new QFrame(addNewPilot);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(70, 20, 161, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(addNewPilot);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 130, 211, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pilotFirstNameInput = new QLineEdit(addNewPilot);
        pilotFirstNameInput->setObjectName(QStringLiteral("pilotFirstNameInput"));
        pilotFirstNameInput->setGeometry(QRect(90, 60, 131, 20));
        pilotFirstNameLabel = new QLabel(addNewPilot);
        pilotFirstNameLabel->setObjectName(QStringLiteral("pilotFirstNameLabel"));
        pilotFirstNameLabel->setGeometry(QRect(30, 60, 61, 20));
        pilotLastNameLabel = new QLabel(addNewPilot);
        pilotLastNameLabel->setObjectName(QStringLiteral("pilotLastNameLabel"));
        pilotLastNameLabel->setGeometry(QRect(30, 100, 61, 20));
        pilotLastNameInput = new QLineEdit(addNewPilot);
        pilotLastNameInput->setObjectName(QStringLiteral("pilotLastNameInput"));
        pilotLastNameInput->setGeometry(QRect(90, 100, 131, 20));
        line_3 = new QFrame(addNewPilot);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 30, 3, 110));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(addNewPilot);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(230, 30, 3, 110));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pilotTitleLabel = new QLabel(addNewPilot);
        pilotTitleLabel->setObjectName(QStringLiteral("pilotTitleLabel"));
        pilotTitleLabel->setGeometry(QRect(40, 20, 31, 16));
        QFont font;
        font.setPointSize(12);
        pilotTitleLabel->setFont(font);
        pilotTitleLabel->setStyleSheet(QStringLiteral("opacity: 1; z-index: 1;"));
        line_5 = new QFrame(addNewPilot);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 20, 21, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(addNewPilot);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 260, 211, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(addNewPilot);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(230, 160, 3, 110));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(addNewPilot);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(80, 150, 151, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        teamHqLabel = new QLabel(addNewPilot);
        teamHqLabel->setObjectName(QStringLiteral("teamHqLabel"));
        teamHqLabel->setGeometry(QRect(30, 230, 61, 20));
        line_9 = new QFrame(addNewPilot);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(20, 160, 3, 110));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        teamNameLabel = new QLabel(addNewPilot);
        teamNameLabel->setObjectName(QStringLiteral("teamNameLabel"));
        teamNameLabel->setGeometry(QRect(30, 190, 61, 20));
        teamTitleLabel = new QLabel(addNewPilot);
        teamTitleLabel->setObjectName(QStringLiteral("teamTitleLabel"));
        teamTitleLabel->setGeometry(QRect(40, 150, 41, 16));
        teamTitleLabel->setFont(font);
        teamTitleLabel->setStyleSheet(QStringLiteral("opacity: 1; z-index: 1;"));
        teamNameInput = new QLineEdit(addNewPilot);
        teamNameInput->setObjectName(QStringLiteral("teamNameInput"));
        teamNameInput->setGeometry(QRect(90, 190, 131, 20));
        teamHqInput = new QLineEdit(addNewPilot);
        teamHqInput->setObjectName(QStringLiteral("teamHqInput"));
        teamHqInput->setGeometry(QRect(90, 230, 131, 20));
        line_10 = new QFrame(addNewPilot);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(20, 150, 21, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(addNewPilot);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(240, 240, 211, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(addNewPilot);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(450, 60, 3, 191));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(addNewPilot);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(280, 50, 171, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        carRegistrationNoLabel = new QLabel(addNewPilot);
        carRegistrationNoLabel->setObjectName(QStringLiteral("carRegistrationNoLabel"));
        carRegistrationNoLabel->setGeometry(QRect(250, 130, 61, 20));
        line_14 = new QFrame(addNewPilot);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(240, 60, 3, 191));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        carVinLabel = new QLabel(addNewPilot);
        carVinLabel->setObjectName(QStringLiteral("carVinLabel"));
        carVinLabel->setGeometry(QRect(250, 90, 61, 20));
        carTitleLabel = new QLabel(addNewPilot);
        carTitleLabel->setObjectName(QStringLiteral("carTitleLabel"));
        carTitleLabel->setGeometry(QRect(260, 50, 31, 16));
        carTitleLabel->setFont(font);
        carTitleLabel->setStyleSheet(QStringLiteral("opacity: 1; z-index: 1;"));
        carVinInput = new QLineEdit(addNewPilot);
        carVinInput->setObjectName(QStringLiteral("carVinInput"));
        carVinInput->setGeometry(QRect(310, 90, 131, 20));
        carRegistrationNoInput = new QLineEdit(addNewPilot);
        carRegistrationNoInput->setObjectName(QStringLiteral("carRegistrationNoInput"));
        carRegistrationNoInput->setGeometry(QRect(310, 130, 131, 20));
        line_15 = new QFrame(addNewPilot);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(240, 50, 21, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        carPowerLabel = new QLabel(addNewPilot);
        carPowerLabel->setObjectName(QStringLiteral("carPowerLabel"));
        carPowerLabel->setGeometry(QRect(250, 210, 61, 20));
        carEngineCapacityInput = new QLineEdit(addNewPilot);
        carEngineCapacityInput->setObjectName(QStringLiteral("carEngineCapacityInput"));
        carEngineCapacityInput->setGeometry(QRect(310, 170, 131, 20));
        carEngineCapacityLabel = new QLabel(addNewPilot);
        carEngineCapacityLabel->setObjectName(QStringLiteral("carEngineCapacityLabel"));
        carEngineCapacityLabel->setGeometry(QRect(250, 170, 61, 20));
        carPowerInput = new QLineEdit(addNewPilot);
        carPowerInput->setObjectName(QStringLiteral("carPowerInput"));
        carPowerInput->setGeometry(QRect(310, 210, 131, 20));

        retranslateUi(addNewPilot);

        QMetaObject::connectSlotsByName(addNewPilot);
    } // setupUi

    void retranslateUi(QDialog *addNewPilot)
    {
        addNewPilot->setWindowTitle(QApplication::translate("addNewPilot", "addNewPilot", nullptr));
        cancelPushButton->setText(QApplication::translate("addNewPilot", "Cancel", nullptr));
        okPushButton->setText(QApplication::translate("addNewPilot", "Ok", nullptr));
        pilotFirstNameLabel->setText(QApplication::translate("addNewPilot", "First name:", nullptr));
        pilotLastNameLabel->setText(QApplication::translate("addNewPilot", "Last name:", nullptr));
        pilotTitleLabel->setText(QApplication::translate("addNewPilot", "Pilot", nullptr));
        teamHqLabel->setText(QApplication::translate("addNewPilot", "HQ:", nullptr));
        teamNameLabel->setText(QApplication::translate("addNewPilot", "Name:", nullptr));
        teamTitleLabel->setText(QApplication::translate("addNewPilot", "Team", nullptr));
        carRegistrationNoLabel->setText(QApplication::translate("addNewPilot", "Reg. no.:", nullptr));
        carVinLabel->setText(QApplication::translate("addNewPilot", "VIN:", nullptr));
        carTitleLabel->setText(QApplication::translate("addNewPilot", "Car", nullptr));
        carPowerLabel->setText(QApplication::translate("addNewPilot", "Power:", nullptr));
        carEngineCapacityLabel->setText(QApplication::translate("addNewPilot", "Engine CC:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewPilot: public Ui_addNewPilot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPILOT_H

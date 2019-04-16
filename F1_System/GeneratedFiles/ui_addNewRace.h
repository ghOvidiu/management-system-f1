/********************************************************************************
** Form generated from reading UI file 'addNewRace.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWRACE_H
#define UI_ADDNEWRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addNewRace
{
public:
    QLabel *lapsLabel;
    QLineEdit *lapsInput;
    QLabel *raceTitleLabel;
    QLineEdit *lengthInput;
    QLineEdit *locationInput;
    QFrame *line_11;
    QFrame *line_12;
    QLabel *locationLabel;
    QFrame *line_15;
    QLabel *lengthLabel;
    QFrame *line_14;
    QFrame *line_13;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *addNewRace)
    {
        if (addNewRace->objectName().isEmpty())
            addNewRace->setObjectName(QStringLiteral("addNewRace"));
        addNewRace->resize(410, 300);
        lapsLabel = new QLabel(addNewRace);
        lapsLabel->setObjectName(QStringLiteral("lapsLabel"));
        lapsLabel->setGeometry(QRect(110, 120, 61, 20));
        lapsInput = new QLineEdit(addNewRace);
        lapsInput->setObjectName(QStringLiteral("lapsInput"));
        lapsInput->setGeometry(QRect(170, 120, 131, 20));
        raceTitleLabel = new QLabel(addNewRace);
        raceTitleLabel->setObjectName(QStringLiteral("raceTitleLabel"));
        raceTitleLabel->setGeometry(QRect(121, 40, 41, 16));
        QFont font;
        font.setPointSize(12);
        raceTitleLabel->setFont(font);
        raceTitleLabel->setStyleSheet(QStringLiteral("opacity: 1; z-index: 1;"));
        lengthInput = new QLineEdit(addNewRace);
        lengthInput->setObjectName(QStringLiteral("lengthInput"));
        lengthInput->setGeometry(QRect(170, 160, 131, 20));
        locationInput = new QLineEdit(addNewRace);
        locationInput->setObjectName(QStringLiteral("locationInput"));
        locationInput->setGeometry(QRect(170, 80, 131, 20));
        line_11 = new QFrame(addNewRace);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(100, 190, 211, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(addNewRace);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(310, 50, 3, 150));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        locationLabel = new QLabel(addNewRace);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));
        locationLabel->setGeometry(QRect(110, 80, 61, 20));
        line_15 = new QFrame(addNewRace);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(100, 40, 21, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        lengthLabel = new QLabel(addNewRace);
        lengthLabel->setObjectName(QStringLiteral("lengthLabel"));
        lengthLabel->setGeometry(QRect(110, 160, 61, 20));
        line_14 = new QFrame(addNewRace);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(100, 50, 3, 150));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(addNewRace);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(155, 40, 156, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        okPushButton = new QPushButton(addNewRace);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(245, 260, 75, 25));
        cancelPushButton = new QPushButton(addNewRace);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(85, 260, 75, 25));

        retranslateUi(addNewRace);

        QMetaObject::connectSlotsByName(addNewRace);
    } // setupUi

    void retranslateUi(QDialog *addNewRace)
    {
        addNewRace->setWindowTitle(QApplication::translate("addNewRace", "addNewRace", nullptr));
        lapsLabel->setText(QApplication::translate("addNewRace", "Laps:", nullptr));
        raceTitleLabel->setText(QApplication::translate("addNewRace", "Race", nullptr));
        locationLabel->setText(QApplication::translate("addNewRace", "Location:", nullptr));
        lengthLabel->setText(QApplication::translate("addNewRace", "Length:", nullptr));
        okPushButton->setText(QApplication::translate("addNewRace", "Ok", nullptr));
        cancelPushButton->setText(QApplication::translate("addNewRace", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewRace: public Ui_addNewRace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWRACE_H

/********************************************************************************
** Form generated from reading UI file 'pickParticipants.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKPARTICIPANTS_H
#define UI_PICKPARTICIPANTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_pickParticipants
{
public:
    QLabel *titleLabel;
    QPushButton *deletePushButton;
    QPushButton *addPushButton;
    QPushButton *okPushButton;
    QTableWidget *driversTable;

    void setupUi(QDialog *pickParticipants)
    {
        if (pickParticipants->objectName().isEmpty())
            pickParticipants->setObjectName(QStringLiteral("pickParticipants"));
        pickParticipants->resize(740, 520);
        titleLabel = new QLabel(pickParticipants);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, 0, 740, 90));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);
        deletePushButton = new QPushButton(pickParticipants);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));
        deletePushButton->setGeometry(QRect(125, 460, 80, 30));
        addPushButton = new QPushButton(pickParticipants);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));
        addPushButton->setGeometry(QRect(330, 460, 80, 30));
        okPushButton = new QPushButton(pickParticipants);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(535, 460, 80, 30));
        driversTable = new QTableWidget(pickParticipants);
        if (driversTable->columnCount() < 7)
            driversTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        driversTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        driversTable->setObjectName(QStringLiteral("driversTable"));
        driversTable->setGeometry(QRect(20, 90, 700, 350));
        driversTable->setColumnCount(7);
        driversTable->horizontalHeader()->setVisible(true);
        driversTable->horizontalHeader()->setCascadingSectionResizes(false);
        driversTable->horizontalHeader()->setHighlightSections(true);

        retranslateUi(pickParticipants);

        QMetaObject::connectSlotsByName(pickParticipants);
    } // setupUi

    void retranslateUi(QDialog *pickParticipants)
    {
        pickParticipants->setWindowTitle(QApplication::translate("pickParticipants", "pickParticipants", nullptr));
        titleLabel->setText(QApplication::translate("pickParticipants", "Pick Participants", nullptr));
        deletePushButton->setText(QApplication::translate("pickParticipants", "Delete", nullptr));
        addPushButton->setText(QApplication::translate("pickParticipants", "Add", nullptr));
        okPushButton->setText(QApplication::translate("pickParticipants", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem = driversTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pickParticipants", "Pilot", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = driversTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pickParticipants", "Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = driversTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pickParticipants", "VIN", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = driversTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("pickParticipants", "Reg. no.", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = driversTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("pickParticipants", "Engine Cap.", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = driversTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("pickParticipants", "Engine Pow.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pickParticipants: public Ui_pickParticipants {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKPARTICIPANTS_H

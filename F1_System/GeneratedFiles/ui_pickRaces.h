/********************************************************************************
** Form generated from reading UI file 'pickRaces.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKRACES_H
#define UI_PICKRACES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_pickRaces
{
public:
    QTableWidget *racesTable;
    QPushButton *deletePushButton;
    QPushButton *addPushButton;
    QPushButton *okPushButton;
    QLabel *titleLabel;

    void setupUi(QDialog *pickRaces)
    {
        if (pickRaces->objectName().isEmpty())
            pickRaces->setObjectName(QStringLiteral("pickRaces"));
        pickRaces->resize(560, 520);
        racesTable = new QTableWidget(pickRaces);
        if (racesTable->columnCount() < 4)
            racesTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        racesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        racesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        racesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        racesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        racesTable->setObjectName(QStringLiteral("racesTable"));
        racesTable->setGeometry(QRect(20, 90, 520, 350));
        deletePushButton = new QPushButton(pickRaces);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));
        deletePushButton->setGeometry(QRect(80, 460, 80, 30));
        addPushButton = new QPushButton(pickRaces);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));
        addPushButton->setGeometry(QRect(240, 460, 80, 30));
        okPushButton = new QPushButton(pickRaces);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(400, 460, 80, 30));
        titleLabel = new QLabel(pickRaces);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, 0, 560, 90));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(pickRaces);

        QMetaObject::connectSlotsByName(pickRaces);
    } // setupUi

    void retranslateUi(QDialog *pickRaces)
    {
        pickRaces->setWindowTitle(QApplication::translate("pickRaces", "pickRaces", nullptr));
        QTableWidgetItem *___qtablewidgetitem = racesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pickRaces", "Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = racesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pickRaces", "Laps", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = racesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pickRaces", "Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = racesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("pickRaces", "To Tournament", nullptr));
        deletePushButton->setText(QApplication::translate("pickRaces", "Delete", nullptr));
        addPushButton->setText(QApplication::translate("pickRaces", "Add", nullptr));
        okPushButton->setText(QApplication::translate("pickRaces", "Ok", nullptr));
        titleLabel->setText(QApplication::translate("pickRaces", "Pick Races", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pickRaces: public Ui_pickRaces {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKRACES_H

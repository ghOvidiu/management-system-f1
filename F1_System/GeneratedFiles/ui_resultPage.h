/********************************************************************************
** Form generated from reading UI file 'resultPage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTPAGE_H
#define UI_RESULTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_resultPage
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *raceNameLabel;

    void setupUi(QDialog *resultPage)
    {
        if (resultPage->objectName().isEmpty())
            resultPage->setObjectName(QStringLiteral("resultPage"));
        resultPage->resize(610, 520);
        pushButton = new QPushButton(resultPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 460, 270, 40));
        tableWidget = new QTableWidget(resultPage);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(25, 80, 560, 300));
        raceNameLabel = new QLabel(resultPage);
        raceNameLabel->setObjectName(QStringLiteral("raceNameLabel"));
        raceNameLabel->setGeometry(QRect(0, 20, 610, 50));
        QFont font;
        font.setPointSize(18);
        raceNameLabel->setFont(font);
        raceNameLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(resultPage);

        QMetaObject::connectSlotsByName(resultPage);
    } // setupUi

    void retranslateUi(QDialog *resultPage)
    {
        resultPage->setWindowTitle(QApplication::translate("resultPage", "resultPage", nullptr));
        pushButton->setText(QApplication::translate("resultPage", "Completare", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("resultPage", "Driver", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("resultPage", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("resultPage", "Aborted", nullptr));
        raceNameLabel->setText(QApplication::translate("resultPage", "Race-name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultPage: public Ui_resultPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTPAGE_H

#include "pickRaces.h"
#include <qtablewidget.h>
#include <QtCore>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

pickRaces::pickRaces(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//Connect listeners
	connect(ui.deletePushButton, SIGNAL(clicked()), this, SLOT(deleteRace()));
	connect(ui.addPushButton, SIGNAL(clicked()), this, SLOT(addNewRaceFcn()));
	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(openResults()));

	populateTable();
}

pickRaces::~pickRaces(){

	QSqlDatabase::database("dataB").close();
}

void pickRaces::populateTable() {
	//Cleaning the table
	ui.racesTable->setRowCount(0);

	//Open the database and fetch table entries
	if (QSqlDatabase::database("dataB").open()) {
		//SQL Query that fetches all the pilots along with their team and car specs
		QString selectAllRaces("SELECT locatie, numar_ture, lungime FROM Curse;");
		//Execute "selectAllPilots" query against "dataB" database
		QSqlQuery qry(selectAllRaces, QSqlDatabase::database("dataB"));

		//Count the number of records
		int rowCounter = 0;

		//Build drivers table
		while (qry.next()) {
			ui.racesTable->insertRow(rowCounter);

			//we use "ui.driversTable->columnCount() - 1" because last column is a checkbox
			for (int colCounter = 0; colCounter < ui.racesTable->columnCount() - 1; colCounter++) {
				ui.racesTable->setItem(rowCounter, colCounter, new QTableWidgetItem(qry.value(colCounter).toString()));
			}

			//TO-DO insert the checkbox in the last column
			QTableWidgetItem* checkboxItem = new QTableWidgetItem();
			checkboxItem->setCheckState(Qt::Unchecked);
			ui.racesTable->setItem(rowCounter, ui.racesTable->columnCount() - 1, checkboxItem);
			//move to the next row
			rowCounter++;
		}

		qry.finish();
	}
}

void pickRaces::addNewRaceFcn() {
	this->hide();
	//Set up the window
	addNewRace addRaceWindow;
	addRaceWindow.setModal(true);
	//Show the window
	addRaceWindow.exec();
}

void pickRaces::deleteRace() {

	int selectedRow;

	for (QTableWidgetItem* selectedItem : ui.racesTable->selectedItems()) {
		if ((*selectedItem).isSelected()) {
			selectedRow = (*selectedItem).row();
			break;
		}
	}

	//Delete car from database using selected row 
	QString deleteRace("DELETE FROM Curse WHERE locatie = '" + (ui.racesTable->item(selectedRow, 0))->text() + "' AND lungime = " + (ui.racesTable->item(selectedRow, 0))->text() +";");
	QSqlQuery deleteFromRaces(deleteRace, QSqlDatabase::database("dataB"));
	deleteFromRaces.finish();
}

void pickRaces::openResults() {
	//TO-DO: save the participants


	//moving to the next screen "resultPage"
		//hide the "Pick Races" UI
	this->hide();
	//set the new page "PickParticipants"
	resultPage resultPageUI;
	resultPageUI.setModal(true);
	//show the new page
	resultPageUI.exec();
}
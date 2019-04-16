#include "pickParticipants.h"
#include <qtablewidget.h>
#include <QtCore>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqlquerymodel.h>
#include <qvector.h>
#include <qstringlist.h>

pickParticipants::pickParticipants(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//Connect listeners
	connect(ui.deletePushButton, SIGNAL(clicked()), this, SLOT(deletePilot()));
	connect(ui.addPushButton, SIGNAL(clicked()), this, SLOT(addNewPilot_Button()));
	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(updateTableStructure()));
	
	//Populate the table
	this->populatePilotsTable();
}

pickParticipants::~pickParticipants() {

	QSqlDatabase::database("dataB").close();

}

void pickParticipants::populatePilotsTable() {
	//Cleaning the table
	ui.driversTable->setRowCount(0);

	//Open the database and fetch table entries
	if (QSqlDatabase::database("dataB").open()) {
		//SQL Query that fetches all the pilots along with their team and car specs
		QString selectAllPilots("SELECT Piloti.nume, Echipe.nume, Masini.Serie_Sasiu, Masini.numar_masina, Masini.capacitate_motor, Masini.putere_motor FROM Piloti JOIN Echipe ON Piloti.ID_Echipa = Echipe.ID_Echipa JOIN Masini ON Piloti.ID_Pilot = Masini.ID_Pilot;");
		//Execute "selectAllPilots" query against "dataB" database
		QSqlQuery qry(selectAllPilots, QSqlDatabase::database("dataB"));

		//Table row counter
		int rowCounter = 0;

		//Build drivers table
		while (qry.next()) {
			ui.driversTable->insertRow(rowCounter);

			//we use "ui.driversTable->columnCount() - 1" because last column is a checkbox
			for (int colCounter = 0; colCounter < ui.driversTable->columnCount() - 1; colCounter++) {
				ui.driversTable->setItem(rowCounter, colCounter, new QTableWidgetItem(qry.value(colCounter).toString()));
			}

			//TO-DO insert the checkbox in the last column
			QTableWidgetItem *checkBoxItem = new QTableWidgetItem();
			checkBoxItem->setCheckState(Qt::Unchecked);
			ui.driversTable->setItem(rowCounter, ui.driversTable->columnCount() - 1, checkBoxItem);

			//move to the next row
			rowCounter++;
		}

		qry.finish();
		qry.~QSqlQuery();

	}
}

void pickParticipants::addNewPilot_Button() {
	//Set up the window
	addNewPilot addPilotWindow;
	addPilotWindow.setModal(true);
	//Show the window
	addPilotWindow.exec();
}

void pickParticipants::deletePilot() {
									  
	int selectedRow;

	for (QTableWidgetItem* selectedItem : ui.driversTable->selectedItems()) {
		if ((*selectedItem).isSelected()) {
			selectedRow = (*selectedItem).row();
			break;
		}
	}

	//Delete car from database using selected row 
	QString deleteCar("DELETE FROM Masini WHERE Serie_sasiu = '" + (ui.driversTable->item(selectedRow, 2))->text() + "';");
	QSqlQuery deleteFromCar(deleteCar, QSqlDatabase::database("dataB"));
	deleteFromCar.finish();

	//Delete pilot from database using selected row 
	QString deletePilot("DELETE FROM Piloti WHERE nume = '" + (ui.driversTable->item(selectedRow, 0))->text().split(' ').value(0) + "' AND prenume = '" + (ui.driversTable->item(selectedRow, 0))->text().split(' ').value(1) + "';");
	QSqlQuery deleteFromPilots(deletePilot, QSqlDatabase::database("dataB"));
	deleteFromPilots.finish();
	
}

//Function to update table's structure
void pickParticipants::updateTableStructure() {
	
	//Saving drivers' IDs before clearing the table
	this->saveDrivers();
	//Clearing view, including headers and selections
	ui.driversTable->clear();
	//Setting up the new structure

	//Label list for the Races Table 
	QStringList labelList;
	labelList.append("Location");
	labelList.append("Laps");
	labelList.append("Length");
	labelList.append("To Tournament");

	//Setting the number of labels
	ui.driversTable->setColumnCount(4);
	//Inserting the labels
	ui.driversTable->setHorizontalHeaderLabels(labelList);

	//Connecting the listeners to race-related functions
	connect(ui.deletePushButton, SIGNAL(clicked()), this, SLOT(deleteRace()));
	connect(ui.addPushButton, SIGNAL(clicked()), this, SLOT(addNewRaceFcn()));
	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(openResults()));

	labelList.~QStringList();
	//Populating the table with races
	this->populateRacesTable();

}

											// Races part

void pickParticipants::addNewRaceFcn() {
	//Set up the window
	addNewRace addRaceWindow;
	addRaceWindow.setModal(true);
	//Show the window
	addRaceWindow.exec();
}

void pickParticipants::deleteRace() {

	int selectedRow;

	for (QTableWidgetItem* selectedItem : ui.driversTable->selectedItems()) {
		if ((*selectedItem).isSelected()) {
			selectedRow = (*selectedItem).row();
			break;
		}
	}

	//Delete car from database using selected row 
	QString deleteRace("DELETE FROM Curse WHERE locatie = '" + (ui.driversTable->item(selectedRow, 0))->text() + "' AND lungime = " + (ui.driversTable->item(selectedRow, 0))->text() + ";");
	QSqlQuery deleteFromRaces(deleteRace, QSqlDatabase::database("dataB"));
	deleteFromRaces.finish();
}

void pickParticipants::openResults() {
	
	this->saveRaces();

	//moving to the next screen "resultPage"
		//hide the "Pick Races" UI
	this->hide();
	//set the new page "PickParticipants"
	resultPage resultPageUI;
	resultPageUI.setModal(true);
	//show the new page
	resultPageUI.exec();
}


void pickParticipants::populateRacesTable() {
	//Cleaning the table
	ui.driversTable->setRowCount(0);

	//Open the database and fetch table entries
	if (QSqlDatabase::database("dataB").open()) {
		//SQL Query that fetches all the pilots along with their team and car specs
		QString selectAllRaces("SELECT locatie, numar_ture, lungime FROM Curse;");
		//Execute "selectAllPilots" query against "dataB" database
		QSqlQuery qry(selectAllRaces, QSqlDatabase::database("dataB"));

		//Count the number of records
		int rowCounter = 0;

		qry.first();
		//Build drivers table
		while (qry.next()) {
			ui.driversTable->insertRow(rowCounter);

			//we use "ui.driversTable->columnCount() - 1" because last column is a checkbox
			for (int colCounter = 0; colCounter < ui.driversTable->columnCount() - 1; colCounter++) {
				ui.driversTable->setItem(rowCounter, colCounter, new QTableWidgetItem(qry.value(colCounter).toString()));
			}

			//TO-DO insert the checkbox in the last column
			QTableWidgetItem* checkboxItem = new QTableWidgetItem();
			checkboxItem->setCheckState(Qt::Unchecked);
			ui.driversTable->setItem(rowCounter, ui.driversTable->columnCount() - 1, checkboxItem);
			//move to the next row
			rowCounter++;
		}

		qry.finish();
	}
}


//Function to save selected drivers' IDs in vector
void pickParticipants::saveDrivers() {

	//Query to fetch driver's Id using name
	QString selectDriverIdByName("SELECT ID_Pilot FROM Piloti WHERE nume = '");
	for (int rowIterator = 0; rowIterator < ui.driversTable->rowCount(); rowIterator++) {
		if (ui.driversTable->item(rowIterator, ui.driversTable->columnCount() - 1)->checkState()) { //Pick every driver with checkbox's checkState == 'Checked'(2)
			//Fetching driver's name from the table
			QString driverName = ui.driversTable->item(rowIterator, 0)->text() + "';";
			//Fetching ID from the database and appending it in the drivers' vector
			QSqlQuery qry(selectDriverIdByName + driverName, QSqlDatabase::database("dataB"));
			qry.first();
			driversIdVector.append(qry.value(0).toInt());
			
			qry.~QSqlQuery();
		}
	}
}

//Function to save selected races' IDs in vector
void pickParticipants::saveRaces() {

	//Query to fetch driver's Id using name
	QString selectRaceIdByLocation("SELECT ID_Cursa FROM Curse WHERE locatie = '");
	for (int rowIterator = 0; rowIterator < ui.driversTable->rowCount(); rowIterator++) {
		if (ui.driversTable->item(rowIterator, ui.driversTable->columnCount() - 1)->checkState() == 2) { //Pick every race with checkbox's checkState == 'Checked'(2)
			//Fetching race's location from the table
			QString raceLocation = ui.driversTable->item(rowIterator, 0)->text() + "';";
			//Fetching ID from the database and appending it in the race' vector
			QSqlQuery qry(selectRaceIdByLocation + raceLocation, QSqlDatabase::database("dataB"));
			qry.first();
			racesIdVector.append(qry.value(0).toInt());

			raceLocation.~QString();
		}
	}
}

void pickParticipants::setRaceTableStructure() {
	
	//Label list for the Races Table 
	QStringList labelList = { "Location", "Laps", "Length", "To Tournament" };
	
	//Setting the number of labels
	ui.driversTable->setColumnCount(4);
	//Inserting the labels
	ui.driversTable->setHorizontalHeaderLabels(labelList);

	//Connecting the listeners to race-related functions
	connect(ui.deletePushButton, SIGNAL(clicked()), this, SLOT(deleteRace()));
	connect(ui.addPushButton, SIGNAL(clicked()), this, SLOT(addNewRaceFcn()));
	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(openResults()));

	labelList.~QStringList();

}
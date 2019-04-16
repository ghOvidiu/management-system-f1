#include "addNewPilot.h"
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

addNewPilot::addNewPilot(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(sendToDatabase()));
}

addNewPilot::~addNewPilot()
{

}

void addNewPilot::sendToDatabase() {
	if (QSqlDatabase::database("dataB").open()) {

		//Inserting TEAM information into the database 
		QString insertIntoTeams("INSERT INTO Echipe (nume, sediu_central) VALUES ('" + ui.teamNameInput->text() + "', '" + ui.teamHqInput->text() + "');");
		QSqlQuery insertTeamQry(insertIntoTeams, QSqlDatabase::database("dataB"));

		//Inserting PILOT information into the database 
		QString insertIntoPilots("INSERT INTO Piloti (nume, prenume, ID_Echipa) VALUES ('" + ui.pilotLastNameInput->text() + "', '" + ui.pilotFirstNameInput->text() + "', (SELECT ID_Echipa FROM Echipe WHERE nume = '" + ui.teamNameInput->text() + "'));");
		QSqlQuery insertPilotQry(insertIntoPilots, QSqlDatabase::database("dataB"));

		//Inserting CAR information into the database 
		QString insertIntoCars("INSERT INTO Masini (Serie_Sasiu, ID_Pilot, numar_masina, putere_motor, capacitate_motor) VALUES ('" + ui.carVinInput->text() + "', (SELECT ID_Pilot FROM Piloti WHERE nume = '" + ui.pilotLastNameInput->text() + "' AND prenume = '" + ui.pilotFirstNameInput->text() + "'), " + ui.carRegistrationNoInput->text() + ", " + ui.carPowerInput->text() + ", " + ui.carEngineCapacityInput->text() + ");");
		QSqlQuery insertCarQry(insertIntoCars, QSqlDatabase::database("dataB"));

		this->close();
	}
}
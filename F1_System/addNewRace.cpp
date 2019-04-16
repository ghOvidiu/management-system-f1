#include "addNewRace.h"
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

addNewRace::addNewRace(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(sendToDatabase()));
}

addNewRace::~addNewRace()
{
}

void addNewRace::sendToDatabase() {
	if (QSqlDatabase::database("dataB").open()) {

		//Inserting TEAM information into the database 
		QString insertIntoRaces("INSERT INTO Curse (locatie, numar_ture, lungime) VALUES ('" + ui.locationInput->text() + "', " + ui.lapsInput->text() + ", " + ui.lengthInput->text() + ");");
		QSqlQuery insertRaceQry(insertIntoRaces, QSqlDatabase::database("dataB"));

		this->close();
	}
}
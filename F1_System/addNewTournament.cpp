#include "addNewTournament.h"
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

addNewTournament::addNewTournament(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.okPushButton, SIGNAL(clicked()), this, SLOT(openPilotsTeamsCars()));
}

addNewTournament::~addNewTournament()
{
	//close the database connection
	QSqlDatabase::database("dataB").close();
}

void addNewTournament::openPilotsTeamsCars() {
	if (QSqlDatabase::database("dataB").open()) {
		//SQL Query that inserts information about the new tournament(name, year)
		QString insertTournament("INSERT INTO Turnee (denumire, an) VALUES ('" + ui.nameOfTournamentInputField->text() + "', " + ui.yearOfTournamentInputField->text() + ");");
		//executing the query against the database "dataB"
		QSqlQuery qry(insertTournament, QSqlDatabase::database("dataB"));

		qry.~QSqlQuery();
		insertTournament.~QString();
		//moving to the next screen "PickParticipants"
		//hide the "Add a new tournament" UI
		this->hide();
		//set the new page "PickParticipants"
		pickParticipants pickParticipantsUI;
		pickParticipantsUI.setModal(true);
		//show the new page
		pickParticipantsUI.exec();
	}
}

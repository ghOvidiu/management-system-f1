#include "welcomePage.h"

welcomePage::welcomePage(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.addNewTournamentPushButton, SIGNAL(clicked()), this, SLOT(openAddNewTournamentWindow()));
	connect(ui.adminPanelPushButton, SIGNAL(clicked()), this, SLOT(openAdminPanelWindow()));
	connect(ui.statisticsPushButton, SIGNAL(clicked()), this, SLOT(openStatisticsWindow()));
}

welcomePage::~welcomePage()
{
}

void welcomePage::openAddNewTournamentWindow() {
	//hide the Login UI
	this->hide();
	//set the new page "Add a new Tournament"
	addNewTournament addNewTournamentUI;
	addNewTournamentUI.setModal(true);
	//show the new page
	addNewTournamentUI.exec();
}

void welcomePage::openAdminPanelWindow() {
	/* Code is ready. Delete the commentaries tag when you set the new screens
	//hide the Login UI
	this->hide();
	//set the new page "Modify a Tournament"
	modifyTournament modifyTournamentUI;
	modifyTournamentUI.setModal(true);
	//show the new page
	modifyTournamentUI.exec();
	*/
}

void welcomePage::openStatisticsWindow() {
	/*  Code is ready. Delete the commentaries tag when you set the new screens
	//hide the Login UI
	this->hide();
	//set the new page "Statistics"
	addNewTournament statisticsUI;
	statisticsUI.setModal(true);
	//show the new page
	statisticsUI.exec();
	*/
	
}
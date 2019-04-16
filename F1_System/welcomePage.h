#pragma once

#include <QDialog>
#include "ui_welcomePage.h"
#include "addNewTournament.h"

class welcomePage : public QDialog
{
	Q_OBJECT

public:
	welcomePage(QWidget *parent = Q_NULLPTR);
	~welcomePage();

private:
	Ui::welcomePage ui;

private slots:
	void openAddNewTournamentWindow();
	//TO-DO
	void openAdminPanelWindow();
	//TO-DO
	void openStatisticsWindow();
};

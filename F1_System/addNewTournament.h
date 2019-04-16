#pragma once

#include <QDialog>
#include "ui_addNewTournament.h"
#include "pickParticipants.h"

class addNewTournament : public QDialog
{
	Q_OBJECT

public:
	addNewTournament(QWidget *parent = Q_NULLPTR);
	~addNewTournament();

private:
	Ui::addNewTournament ui;

private slots:
	void openPilotsTeamsCars();

};

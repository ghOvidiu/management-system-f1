#pragma once

#include <QDialog>
#include "ui_pickRaces.h"
#include "resultPage.h"
#include "addNewRace.h"

class pickRaces : public QDialog
{
	Q_OBJECT

public:
	pickRaces(QWidget *parent = Q_NULLPTR);
	~pickRaces();

private:
	Ui::pickRaces ui;
	void populateTable();

private slots:
	void addNewRaceFcn();
	void deleteRace();
	void openResults();
};

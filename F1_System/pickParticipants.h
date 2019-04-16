#pragma once

#include <QDialog>
#include "ui_pickParticipants.h"
#include "pickRaces.h"
#include "addNewPilot.h"

class pickParticipants : public QDialog
{
	Q_OBJECT

public:
	pickParticipants(QWidget *parent = Q_NULLPTR);
	~pickParticipants();
	//QVector to store the drivers' IDs
	QVector<int> driversIdVector;
	//QVector to store the races' IDs
	QVector<int> racesIdVector;

private:
	Ui::pickParticipants ui;
	void populatePilotsTable();
	void saveDrivers();
	//Race-related methods
	void populateRacesTable();
	void saveRaces();
	void setRaceTableStructure();

private slots:
	void addNewPilot_Button();
	void deletePilot();
	void updateTableStructure();

	//Race-related slots
	void addNewRaceFcn();
	void deleteRace();
	void openResults();
};

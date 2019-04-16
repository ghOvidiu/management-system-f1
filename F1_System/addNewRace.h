#pragma once

#include <QDialog>
#include "ui_addNewRace.h"

class addNewRace : public QDialog
{
	Q_OBJECT

public:
	addNewRace(QWidget *parent = Q_NULLPTR);
	~addNewRace();

private:
	Ui::addNewRace ui;

private slots:
	void sendToDatabase();
};

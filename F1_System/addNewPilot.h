#pragma once

#include <QDialog>
#include "ui_addNewPilot.h"

class addNewPilot : public QDialog
{
	Q_OBJECT

public:
	addNewPilot(QWidget *parent = Q_NULLPTR);
	~addNewPilot();

private:
	Ui::addNewPilot ui;

private slots:
	void sendToDatabase();
};

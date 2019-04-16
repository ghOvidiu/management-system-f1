#pragma once
#pragma comment(lib, "Advapi32.lib")
#include <QtWidgets/QMainWindow>
#include <QtSql/qsqldatabase.h>
#include "ui_f1_system.h"
#include "welcomePage.h"

class F1_System : public QMainWindow
{
	Q_OBJECT

public:
	F1_System(QWidget *parent = Q_NULLPTR);
	~F1_System();

private slots:
	void validateLogin();

private:
	Ui::F1_SystemClass ui;
};

#pragma once

#include <QDialog>
#include "ui_resultPage.h"

class resultPage : public QDialog
{
	Q_OBJECT

public:
	resultPage(QWidget *parent = Q_NULLPTR);
	~resultPage();

private:
	Ui::resultPage ui;
};

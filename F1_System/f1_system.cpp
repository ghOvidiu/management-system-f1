#include "f1_system.h"
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqldriver.h>

F1_System::F1_System(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//set the "QODBC" driver for the "dataB" database
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "dataB");
	//connection string for an SQL Server Express instance
	QString connectionString = "Driver={SQL Server};Server=DESKTOP-4K9MAS2\\SQLEXPRESS01;Database=Formula1_BD;Trusted_Connection=yes;";
	//establish the connection
	db.setDatabaseName(connectionString);

	connect(ui.loginPushButton, SIGNAL(clicked()), this, SLOT(validateLogin()));
}
F1_System::~F1_System() {
	//close the database connection
	QSqlDatabase::database("dataB").close();
}
void F1_System::validateLogin() { 
	
	if (QSqlDatabase::database("dataB").open()) { //open the connection
		//SQL Query that selects the Username if there is a {username, password} record
		QString selectUser("SELECT Username FROM Users WHERE Username = '" + ui.usernameInputField->text() + "' AND Userpassword = '" + ui.passwordInputField->text() + "';");
		//execute the query on the database "dataB" 
		QSqlQuery qry(selectUser, QSqlDatabase::database("dataB"));
		
		 if (qry.next()) { // checking if there are any records, so we can validate the login
			 ui.label->setText("Status: You are logged in!");
			 //hide the Login UI
			 this->hide();
			 //set the new page
			 welcomePage welcomePageUI;
			 welcomePageUI.setModal(true);
			 //show the new page
			 welcomePageUI.exec();
		}
			
		else //if there are no records found in the database, send a message
			ui.label->setText("Status: Wrong credentials!\nTry again!");
	}
	else //if the connection fails
		ui.label->setText("Failed to connect to the database!");

}
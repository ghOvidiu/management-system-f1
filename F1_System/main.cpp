#include "f1_system.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	F1_System w;
	w.show();
	return a.exec();
}

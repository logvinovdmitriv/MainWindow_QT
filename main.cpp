#include "MainWindow.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.setWindowTitle("Hello world");
	w.show();
	return a.exec();
}
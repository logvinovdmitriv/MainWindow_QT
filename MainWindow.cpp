#include "MainWindow.h"
MainWindow::MainWindow(QWidget* parent) :QMainWindow(parent)
{
	label = new QLabel("Hello world", this);
	//label->show();
	//ui.setupUi(this);
}
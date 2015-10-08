#include <QtWidgets\\qapplication.h>
#include <QtWidgets\qwidget.h>
#include "MyGLWindow.h"


int main(int argc, char* argv[] ) {

	QApplication application(argc, argv);

	MyGLWindow myGL_window;
	myGL_window.show();
	




	return application.exec();
}
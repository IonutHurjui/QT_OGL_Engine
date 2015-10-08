#ifndef SANDBOX_MYGLWINDOW_H
#define SANDBOX_MYGLWINDOW_H

#include <QtOpenGL\qgl.h>



class MyGLWindow : public QGLWidget
{
public:
	MyGLWindow();
	
	GLuint VBO;

protected:

	void initializeGL();
	void paintGL();



};


#endif SANDBOX_MYGLWINDOW_H
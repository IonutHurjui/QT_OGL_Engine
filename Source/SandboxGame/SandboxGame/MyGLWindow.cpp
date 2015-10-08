#include <glew.h>
#include <cassert>
#include "MyGLWindow.h"




MyGLWindow::MyGLWindow()
{
}

void MyGLWindow::initializeGL()
{

	GLenum errorCode =glewInit();
	assert(errorCode == 0);

	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	GLfloat vertices[] = {
		0.0f, 0.1f,
		-0.1f, -0.1f,
		0.1f, -0.1f,
	};

	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);




}

void MyGLWindow::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glDrawArrays(GL_TRIANGLES, 0, 3);


}



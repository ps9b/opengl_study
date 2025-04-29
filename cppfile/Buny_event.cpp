
#include<GL/glut.h>
#include<GL/GL.h>
#include<GL/GLU.h>
#include "BunnyModel.h"

int xRotate = 0;

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
	glScalef(1.5f, 1.5f, 1.5f);
	glRotatef(xRotate, 1.0, 0.0, 0.0);

	unsigned int i;
	glBegin(GL_LINES);
	for (i = 0; i < (sizeof(face_indicies) / sizeof(face_indicies[0])); i++) {
		int vi;
		vi = face_indicies[i][0]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
		vi = face_indicies[i][1]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
		vi = face_indicies[i][1]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
		vi = face_indicies[i][2]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
		vi = face_indicies[i][2]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
		vi = face_indicies[i][0]; glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
	}

	glEnd();
	glFlush();
}

void MyKeyboard(unsigned char keyPressed, int x, int y) {
	switch (keyPressed) {
	case 'X':
		xRotate += 1; break;
	case 'x':
		xRotate -= 1; break;
	}

	glutPostRedisplay();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("Open Example");
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}


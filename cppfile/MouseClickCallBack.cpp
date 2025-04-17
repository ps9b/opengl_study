#include<GL/glut.h>
#include<GL/GL.h>
#include<GL/GLU.h>

GLint TopLeftX, TopLeftY, BottomRightX, BottomRightY;

void MyDisplay()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex3f(TopLeftX / 300.0, (300.0 - TopLeftY) / 300.0, 0.0);
	glVertex3f(BottomRightX / 300.0, (300.0 - BottomRightY) / 300.0, 0.0);

	glEnd();
	glFlush();
}

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {
	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN) {
		TopLeftX = X;
		TopLeftY = Y;
	}
	if (Button == GLUT_LEFT_BUTTON && State == GLUT_UP) {
		BottomRightX = X;
		BottomRightY = Y;
		glutPostRedisplay();
	}
}
/*
void MyMouseMove(GLint X, GLint Y) {
	BottomRightX = X;
	BottomRightY = Y;
	glutPostRedisplay();
}
*/

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(300, 300);
	glutCreateWindow("Open Example");

	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

	glutDisplayFunc(MyDisplay);
	glutMouseFunc(MyMouseClick);
	//glutMotionFunc(MyMouseMove);

	glutMainLoop();
	return 0;
}

#include<GL/glut.h>
#include<GL/GL.h>
#include<GL/GLU.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(-90, 1.0, 0.0, 0.0);
	
	glutWireSphere(0.5, 24, 6);
	/*
glutSolidSphere(0.5, 24, 6);
	glutWireCube(1.0);
	glutWireCone(0.4, 0.8, 18, 9);
	glutWireTorus(0.2, 0.6, 18, 36);
	glutWireTeapot(0.5);
*/

	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("Open Example");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

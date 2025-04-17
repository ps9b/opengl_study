#include<GL/glut.h>
#include<GL/GL.h>
#include<GL/GLU.h>

void MyDisplay()
{
        glClear(GL_COLOR_BUFFER_BIT);
        
  
        glFlush();
}

int main(int argc, char* argv[])
{
        glutInit(&argc, argv);
        glutCreateWindow("Open Example");
        glutMainLoop();
        return 0;
}

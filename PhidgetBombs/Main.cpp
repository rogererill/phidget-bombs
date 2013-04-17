#include "Main.h"
#include <stdio.h>
#include <glut.h>
#include <phidget21.h>

Main::Main(void)
{
}

Main::~Main(void)
{
}

void display(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glutWireTorus(0.25,0.75, 28, 28);
    glColor3f(0.0,0.0,1.0) ;
    glutWireCube(.60) ;
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
        glutInitWindowSize(512, 512);
        glutInitWindowPosition(20, 20);
        glutCreateWindow("Toroide");
        glutDisplayFunc(display);
        glutMainLoop();
        return 0;
}
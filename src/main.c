#include <stdio.h>
#include <stdlib.h>
#include <GL/GLUT.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}

void init()
{
	glClear(0.3, 0.3, 0.3, 0);
	gluOrtho2D(0, 1024, 512, 0);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowSize(1024, 512);
	glutCreateWindow("YouTube - 3DSage");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}

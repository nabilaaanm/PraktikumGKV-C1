// Nama : Nabila Najma Manika 
// NIM  : 24060122140172
// Lab  : C1

#include <GL/glut.h>
#include <stdlib.h>

void point (void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f, 0.0F);
	glVertex3f(0.25,0.25,0.0);
glEnd (); glFlush();
}
int main(int argc, char*argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA) ;
	glutCreateWindow("Titik");
	glutDisplayFunc (point);
	glClearColor(0.0f,0.0f, 1.0f, 1.02);
	glutMainLoop();
	return 0;
}


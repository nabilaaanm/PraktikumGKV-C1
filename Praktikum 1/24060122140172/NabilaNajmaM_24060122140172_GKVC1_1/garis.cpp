// Nama : Nabila Najma Manika 
// NIM  : 24060122140172
// Lab  : C1

#include <GL/glut.h>
#include <stdlib.h>

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.0, 0.20, 0.0);
    glVertex3f(0.0, -0.20, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Garis");
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutDisplayFunc(Garis);
    glutMainLoop();
    return 0;
}



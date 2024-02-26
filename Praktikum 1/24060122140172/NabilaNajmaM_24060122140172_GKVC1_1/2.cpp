// Nama : Nabila Najma Manika 
// NIM  : 24060122140172
// Lab  : C1
#include <GL/glut.h>
#include <stdlib.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Menggambar garis strip (warna merah)
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.1, 1.0); 
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.6, 0.5);
    glEnd();
    
    // Menggambar loop garis (warna hijau)
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 1.0, 0.0); 
    glVertex2f(0.2, 0.8);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.8, 0.8);
    glEnd();
    
    // Menggambar triangle fan (warna biru)
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 0.0, 1.0); 
    glVertex2f(-0.8, -0.8);
    glVertex2f(-0.8, -0.5);
    glVertex2f(-0.3, -0.8);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.2, -0.8);
    glEnd();
    
    // Menggambar triangle strip (warna kuning)
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 1.0, 0.0); 
    glVertex2f(0.2, -0.8);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.5, -0.8);
    glEnd();
    
    // Menggambar triangle strip (warna ungu)
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 0.0, 1.0); 
    glVertex2f(0.8, -0.8);
    glVertex2f(0.8, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, -0.8);
    glEnd();
    
    // Menggambar quad strip (warna abu-abu)
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(-0.8, 0.2);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.8, -0.2);
    glVertex2f(-0.5, -0.2);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(-2.0, 0.0, 0.0, 1.1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


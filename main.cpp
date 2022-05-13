#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
void display()
{
// Clear Buffers(colors) from memory
    glClear(GL_COLOR_BUFFER_BIT);
//reset any transimation
    glLoadIdentity();
//draw
//background
    glPointSize(10.0);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.0);
    glVertex2f(-10.0, -5.0);
    glVertex2f(10.0 , -5.0);
    glVertex2f(10.0 , -10.0);
    glVertex2f(-10.0 , -10.0);
    glEnd();
    //line tree
    glBegin(GL_POLYGON);
    glColor3f(0.36 , 0.25, 0.20);
    glVertex2f(6.0, -3.0);
    glVertex2f(7.0 , -3.0);
    glVertex2f(7.0 , -5.0);
    glVertex2f(6.0 , -5.0);
    glEnd();
    //body tree
    glBegin(GL_TRIANGLES);
    glColor3f(0.0 , 0.6, 0.0);
    glVertex2f(9.0, -3.0);
    glVertex2f(4.0 , -3.0);
    glVertex2f(6.45 , 6.0);
    glEnd();
    glFlush();
        //line tree2
    glBegin(GL_POLYGON);
    glColor3f(0.36 , 0.25, 0.20);
    glVertex2f(4.0, -2.0);
    glVertex2f(4.5 , -2.0);
    glVertex2f(4.5 , -5.0);
    glVertex2f(4.0 , -5.0);
    glEnd();
    //body tree2
    glBegin(GL_TRIANGLES);
    glColor3f(0.0 , 0.7, 0.0);
    glVertex2f(6.5, -2.0);
    glVertex2f(2 , -2.0);
    glVertex2f(4.25 , 8.0);
    glEnd();
    glFlush();

}
void init()
{
    glClearColor(0.52, 0.80, 0.92, 1.0);
}
void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argcp, char**argv)
{
    // Window support colors
    glutInitDisplayMode(GLUT_RGBA);
    //Window Position
    glutInitWindowPosition(200, 100);
    //Window Size
    glutInitWindowSize(1000, 1000);
    //Create Window with name "window1"
    glutCreateWindow("window 1");
    //Display the functions in window
    glutDisplayFunc(display);
    // to reshape points
    glutReshapeFunc(reshape);
    // to put colors
    init();

    glutMainLoop();
}

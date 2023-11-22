#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw a colored square
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(-0.3f, -0.3f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.3f, -0.3f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.3f, 0.3f);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(-0.3f, 0.3f);
    glEnd();
    glFlush();

    // Draw the outline around the square
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(0.3f, -0.3f);

   glColor3f(0.0f, 0.0f, 1.0f);// Red
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, 0.3f);

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(-0.3f, 0.3f);

    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, -0.3f);
    glEnd();

    // Draw points at the vertices
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.3f, -0.3f);

    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.3f, -0.3f);

    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.3f, 0.3f);

    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(-0.3f, 0.3f);
    glEnd();

    // Draw a colored triangle



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.0f, 0.8f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.3f, 0.3f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.3f, 0.3f);
    glEnd();

    glFlush();

	
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("A hut");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

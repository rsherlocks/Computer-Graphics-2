 #include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (585, 350);
glVertex2d (615, 335);
glVertex2d (615, 365);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (615, 335);
glVertex2d (630, 305);
glVertex2d (645, 335);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (645, 335);
glVertex2d (675, 350);
glVertex2d (645, 365);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (645, 365);
glVertex2d (630, 395);
glVertex2d (615, 365);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (615, 365);
glVertex2d (615, 335);
glVertex2d (645, 335);
glVertex2d (645, 365);
glEnd();


glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (675, 350);
glVertex2d (660, 320);
glVertex2d (690, 320);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (660, 320);
glVertex2d (630, 305);
glVertex2d (660, 290);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (660, 290);
glVertex2d (675, 260);
glVertex2d (690, 290);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (690, 290);
glVertex2d (720, 305);
glVertex2d (690, 320);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (660, 320);
glVertex2d (660, 290);
glVertex2d (690, 290);
glVertex2d (690, 320);
glEnd();


glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (675, 350);
glVertex2d (705, 335);
glVertex2d (705, 365);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (705, 335);
glVertex2d (720, 305);
glVertex2d (735, 335);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (735, 335);
glVertex2d (765, 350);
glVertex2d (735, 365);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (735, 365);
glVertex2d (720, 395);
glVertex2d (705, 365);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (705, 365);
glVertex2d (705, 335);
glVertex2d (735, 335);
glVertex2d (735, 365);
glEnd();


glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (675, 350);
glVertex2d (690, 380);
glVertex2d (660, 380);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (690, 380);
glVertex2d (720, 395);
glVertex2d (690, 410);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (690, 410);
glVertex2d (675, 440);
glVertex2d (660, 410);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (660, 410);
glVertex2d (630, 395);
glVertex2d (660, 380);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (660, 410);
glVertex2d (660, 380);
glVertex2d (690, 380);
glVertex2d (690, 410);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 1350, 0, 700);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1350, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("stars");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


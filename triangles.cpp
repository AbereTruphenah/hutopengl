#include<Windows.h>
#include<gl/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void init (void)
{
glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 300.0,0.0,300.0);
}
void line_segment(void)
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(150,155);
	glColor3f(0.0,0.0,1.0);
	glVertex2i(85,240);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(20,155);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex2i(130,155);
glColor3f(0.0,0.0,1.0);
glVertex2i(40,155);
glColor3f(1.0,0.0,0.0);
glVertex2i(40,60);
glColor3f(0.0,1.0,0.0);
glVertex2i(130,60);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1.0,0.0,0.0);
glVertex2f(35,155);
glVertex2f(35,52);
glColor3f(0.0,1.0,0.0);
glVertex2f(35,52);
glVertex2f(135,52);
glColor3f(0.0,0.0,1.0);
glVertex2f(135,52);
glVertex2f(135,155);
glEnd();
glFlush();

}
	int main(int argc, char **argv) 
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("MY HUT");
init();
glutDisplayFunc(line_segment);
glutMainLoop();

}

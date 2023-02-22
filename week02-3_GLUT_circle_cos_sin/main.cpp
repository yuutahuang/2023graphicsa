#include <GL/glut.h>
#include <math.h> ///���Fcos(), sin()
void mycircle(float r, float x, float y)
{
    glBegin(GL_POLYGON);
        for (float a=0; a<2*3.141592653589793238462643383279; a+=0.01){
            glVertex2f(r*cos(a)+x, r*sin(a)+y); ///�b�|
        }
    glEnd();
}
void display()
{
    glColor3f(1, 0, 1); mycircle(0.6, 0, 0); ///middle

    glColor3f(1, 0, 0); mycircle(0.3, 0.5, 0.5); ///top right
    glColor3f(0, 1, 0); mycircle(0.3, -0.5, 0.5); ///top left
    glColor3f(1, 1, 0); mycircle(0.3, -0.5, -0.5); ///bottom left
    glColor3f(0, 0, 1); mycircle(0.3, 0.5, -0.5); ///bottom right

    glutSwapBuffers(); ///��GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{ ///�W���o��O�S�O��main�禡, ���ܦh�Ѽ�
	glutInit(&argc, argv); ///��GLUT�}�_��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///�W�������Ҧ��]�w�n
	glutCreateWindow("GLUT Shapes"); ///�n�}����
	glutDisplayFunc(display); ///�n��ܪ������禡
	glutMainLoop();///�̫�� main�j��, ���b�̫᭱
}

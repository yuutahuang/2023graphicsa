#include <GL/glut.h>
void display()
{
   /// glColor3f(0, 1, 0); ///���
   /// glutSolidTeapot(0.5); ///�e�X�@�ӹ�ߪ�����, �����j�p�O0.5
    glBegin(GL_POLYGON); ///�}�l�e�h���
        glColor3f(1, 0, 0);   glVertex2f(0, 1); ///���⳻�I Vertex
        glColor3f(0, 1, 0);   glVertex2f(-1, -1); ///��⳻�I Vertex
        glColor3f(0, 0, 1);   glVertex2f(+1, -1); ///�Ŧ⳻�I Vertex
    glEnd(); ///�����e

    glColor3f(1, 1, 0); ///����
    glutSolidTeapot(0.3); ///�e�X�@�ӹ�ߪ�����, �����j�p�O0.3
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

#include <GL/glut.h>
float X=0, Y=0; ///�Q��globol�ܼ�, �b�禡�����ǭ� (�j�g)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); ///�M�I��
    glPushMatrix(); ///�ƥ��x�}
        glTranslatef(X, Y, 0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}
    glutSwapBuffers();
}
//#include <stdio.h>
void mouse(int button, int state, int x, int y)
{
    ///button�N��ƹ����k��, state�N��O�_��������
    //printf("%d %d %d %d\n", button, state, x, y);
    X = (x-150)/150.0;
    Y = -(y-150)/150.0; ///��@�b, ���@�b, y�ܭt��, �����j�p:300x300
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}

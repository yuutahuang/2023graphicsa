#include <GL/glut.h>
float angle = 0; ///�ŧiglobal������
void display()
{
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); ///�M�I��
    glPushMatrix(); ///�ƥ��x�}
        glTranslated(0.6, 0, 0);
        glRotatef(angle, 0, 1, 0); ///���� angle ����
        glColor3f(1, 1, 0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}
    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle, 0, 1, 0); ///���� angle ����
        glTranslated(0.6, 0, 0);
        glColor3f(1, 0, 0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}
    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///����idle��, �N���e�e��
    glutMainLoop();
}

#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); ///�M�I��
    glColor3f(0, 1, 0); ///Green
    glPushMatrix();
        glTranslatef(0.8, 0, 0); ///�̫�O��Ⲿ��
        glRotatef(angle, 0, 0, 1); ///���z�b
        glutSolidTeapot(0.3);
    glPopMatrix();

    glColor3f(1, 0, 0); ///Red
    glPushMatrix();
        glRotatef(angle, 0, 0, 1); ///���z�b��, �̫�O�������
        glTranslatef(0.8, 0, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}

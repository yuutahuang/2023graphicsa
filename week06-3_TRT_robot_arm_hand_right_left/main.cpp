#include <GL/glut.h>
float angle = 0;
void drawHand()
{
    glPushMatrix();
        glScalef(1, 0.3, 0.3);
        glutSolidCube(0.5);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix(); ///�k�W���u
        glTranslatef(0.25, 0, 0); ///(3) �n���W�h
        glRotatef(angle, 0, 0, 1); ///(2)���
        glTranslatef(0.25, 0, 0); ///(1) �⤤��,��b������
        drawHand();///�k�W���u

        glPushMatrix();///�k�U���u
            glTranslatef(0.25, 0, 0); ///(3) �n���W�h
            glRotatef(angle, 0, 0, 1); ///(2)���
            glTranslatef(0.25, 0, 0); ///(1) �⤤��,��b������
            drawHand();///�k�U���u
         glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///���W���u
        glTranslatef(-0.25, 0, 0); ///(3) �n���W�h
        glRotatef(angle, 0, 0, 1); ///(2)���
        glTranslatef(-0.25, 0, 0); ///(1) �⤤��,��b������
        drawHand();///���W���u

        glPushMatrix();///���U���u
            glTranslatef(-0.25, 0, 0); ///(3) �n���W�h
            glRotatef(angle, 0, 0, 1); ///(2)���
            glTranslatef(-0.25, 0, 0); ///(1) �⤤��,��b������
            drawHand();///���U���u
         glPopMatrix();
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

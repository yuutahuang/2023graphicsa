///貼上上周的week05-2_TRT_robot
#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.02, 30, 30); ///正中心圓球
    glPushMatrix();
        glRotatef(angle, 0, 0, 1); ///
        glTranslatef(0.46, -0.05, 0); ///把轉動的中心, 放中心點
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

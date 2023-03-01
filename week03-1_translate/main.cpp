#include <GL/glut.h>
float X=0, Y=0; ///利用globol變數, 在函式之間傳值 (大寫)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); ///清背景
    glPushMatrix(); ///備份矩陣
        glTranslatef(X, Y, 0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///還原矩陣
    glutSwapBuffers();
}
//#include <stdio.h>
void mouse(int button, int state, int x, int y)
{
    ///button代表滑鼠左右鍵, state代表是否有按按鍵
    //printf("%d %d %d %d\n", button, state, x, y);
    X = (x-150)/150.0;
    Y = -(y-150)/150.0; ///減一半, 除一半, y變負號, 視窗大小:300x300
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

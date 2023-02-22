#include <GL/glut.h>
#include <math.h> ///為了cos(), sin()
void mycircle(float r, float x, float y)
{
    glBegin(GL_POLYGON);
        for (float a=0; a<2*3.141592653589793238462643383279; a+=0.01){
            glVertex2f(r*cos(a)+x, r*sin(a)+y); ///半徑
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

    glutSwapBuffers(); ///請GLUT把畫面swap送到顯示的地方
}
int main(int argc, char *argv[])
{ ///上面這行是特別的main函式, 有很多參數
	glutInit(&argc, argv); ///把GLUT開起來
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///上面那行把模式設定好
	glutCreateWindow("GLUT Shapes"); ///要開視窗
	glutDisplayFunc(display); ///要顯示的對應函式
	glutMainLoop();///最後用 main迴圈, 壓在最後面
}

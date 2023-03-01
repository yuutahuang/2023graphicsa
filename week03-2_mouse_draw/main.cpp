#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); ///清背景
    //glutSolidTeapot(0.3);
    glBegin(GL_POLYGON); ///描圖
        glVertex2f(-0.580, 0.196);
        glVertex2f(-0.572, 0.228);
        glVertex2f(-0.536, 0.308);
        glVertex2f(-0.468, 0.384);
        glVertex2f(-0.360, 0.456);
        glVertex2f(-0.100, 0.508);
        glVertex2f(0.108, 0.512);
        glVertex2f(0.292, 0.492);
        glVertex2f(0.392, 0.420);
        glVertex2f(0.496, 0.184);
        glVertex2f(0.520, -0.028);
        glVertex2f(0.512, -0.288);
        glVertex2f(0.288, -0.456);
        glVertex2f(0.200, -0.372);
        glVertex2f(0.092, -0.332);
        glVertex2f(-0.008, -0.440);
        glVertex2f(-0.112, -0.464);
        glVertex2f(-0.212, -0.400);
        glVertex2f(-0.304, -0.304);
        glVertex2f(-0.508, -0.404);
        glVertex2f(-0.568, -0.372);
        glVertex2f(-0.632, -0.272);
        glVertex2f(-0.640, -0.120);
        glVertex2f(-0.584, 0.076);
        glVertex2f(-0.536, 0.228);
        glVertex2f(-0.400, 0.432);
    glEnd();
    glBegin(GL_LINE_LOOP); ///描線
        glVertex2f(-0.060, 0.516);
        glVertex2f(-0.064, 0.520);
        glVertex2f(-0.068, 0.560);
        glVertex2f(-0.060, 0.596);
        glVertex2f(-0.056, 0.628);
        glVertex2f(-0.036, 0.676);
        glVertex2f(-0.024, 0.704);
        glVertex2f(-0.004, 0.740);
        glVertex2f(0.028, 0.788);
        glVertex2f(0.064, 0.820);
        glVertex2f(0.084, 0.836);
        glVertex2f(0.116, 0.852);
        glVertex2f(0.176, 0.868);
    glEnd();
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)
{
    ///button代表滑鼠左右鍵, state代表是否有按按鍵
    //printf("%d %d %d %d\n", button, state, x, y);
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0; ///減一半, 除一半, y變負號, 視窗大小:300x300
    if (state==GLUT_DOWN){ ///只有按下mousse, 才印出程式
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500, 500); ///視窗大小
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}

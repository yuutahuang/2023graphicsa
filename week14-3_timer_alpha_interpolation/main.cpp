#include <GL/glut.h>
float angle=0, newAngle=0, oldAngle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)
{
    if (t<100) glutTimerFunc(50, timer, t+1); //在100之內, 設定下一個
    float alpha = t/100.0; //介於0.01~1.00之間
    angle = newAngle*alpha + (1-alpha)*oldAngle; //alpha 內插公式
    glutPostRedisplay(); //重畫重面
}
void motion(int x, int y)
{
    angle = x; //即時更新角度
    glutPostRedisplay(); //重畫畫面
}
void mouse(int button, int state, int x, int y)
{
    if (state==GLUT_DOWN) oldAngle = x; //按下去
    if (state==GLUT_UP) newAngle = x; //放開來
    glutPostRedisplay(); //重畫畫面
}
void keyboard(unsigned char key, int x, int y) //按任意鍵就會撥放動畫
{
    glutTimerFunc(0, timer, 0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); //按下去表示起點, 放開表示終點
    glutMotionFunc(motion); //當mouse在motion時, 即時更新畫面
    glutKeyboardFunc(keyboard); //用keyboard啟動

    glutMainLoop();
}

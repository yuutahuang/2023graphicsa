//week11_2 keyboard_PlaySound
#include <windows.h>
#include <GL/glut.h>

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y)
{//音樂檔, 先用絕對路徑, \\代表一個反斜線
    if (key=='1') PlaySound("C:\\Users\\gamey\\Downloads\\do.wav", NULL, SND_ASYNC);
    if (key=='2') PlaySound("C:\\Users\\gamey\\Downloads\\re.wav", NULL, SND_ASYNC);
    if (key=='3') PlaySound("C:\\Users\\gamey\\Downloads\\mi.wav", NULL, SND_ASYNC);
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week11");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}

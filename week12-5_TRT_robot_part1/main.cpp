#include <stdio.h>
#include <GL/glut.h>
FILE * fin = NULL; //�@�}�l�S���}�ONULL
FILE * fout = NULL; //�nŪ�ɥΪ����Ф]�ONULL
//float teapotX=0, teapotY=0;
float angle=0, angle2=0, angle3=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslated(teapotX, teapotY, 0);
        ///glutTranslatef(???); �\�ʧ@
        glutRotatef(angle, 0, 0, 1); ///�\�ʧ@
        ///glutTranslatef(???);
        //glutTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN){
        teapotX = (x-150)/150.0;
        teapotY = (150-y)/150.0;
        angle = x; ///�ƹ��������ܨ���
        printf("glTranslatef(%f %f %f)");
        if (fout == NULL) fout = fopen("file4.txt", "w"); //�S�}�ɴN�}
        fprintf(fout, "%f %f\n", teapotX, teapotY); //�n�A�s�y��
    }
    display();
}
void keyboard(unsigned char key, int x, int y)
{
    if (fin==NULL){ //�p�G�ɮ��٨Sfopen()�N���}
        fclose(fout); //�e��mouse�|�}fout��, �ҥH�n����
        fin = fopen("file4.txt", "r");//�S�}�ɴN�}
    }
  //  fscanf(fin, "%f %f", &teapotX, &teapotY);//�u��Ū��
    display();//���e�e��
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week12");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}

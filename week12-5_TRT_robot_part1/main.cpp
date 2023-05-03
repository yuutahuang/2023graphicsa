#include <stdio.h>
#include <GL/glut.h>
FILE * fin = NULL; //一開始沒有開是NULL
FILE * fout = NULL; //要讀檔用的指標也是NULL
//float teapotX=0, teapotY=0;
float angle=0, angle2=0, angle3=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslated(teapotX, teapotY, 0);
        ///glutTranslatef(???); 擺動作
        glutRotatef(angle, 0, 0, 1); ///擺動作
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
        angle = x; ///滑鼠直接改變角度
        printf("glTranslatef(%f %f %f)");
        if (fout == NULL) fout = fopen("file4.txt", "w"); //沒開檔就開
        fprintf(fout, "%f %f\n", teapotX, teapotY); //要再存座標
    }
    display();
}
void keyboard(unsigned char key, int x, int y)
{
    if (fin==NULL){ //如果檔案還沒fopen()就打開
        fclose(fout); //前面mouse會開fout指, 所以要關掉
        fin = fopen("file4.txt", "r");//沒開檔就開
    }
  //  fscanf(fin, "%f %f", &teapotX, &teapotY);//真的讀檔
    display();//重畫畫面
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

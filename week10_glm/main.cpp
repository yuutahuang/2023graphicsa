#include <GL/glut.h>
#include "glm.h" //下載source.zip有glm.h放week10 glm目錄裡
//glm.c 改檔名成glm.cpp放在week10 glm目錄裡
//把glm.cpp加到專案裡
//把模型檔(ex. Al. obj Al. mtl...) 複製到工作執行目錄
//Bulid log最後一行會說它在哪裡(in C:\Users\...\freeglut\bin)
GLMmodel * pmodel = NULL; //有一個模型的指標, 先是空的
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if (pmodel==NULL){
        pmodel = glmReadOBJ("Al.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel, 90);
    }
    glmDraw(pmodel, GLM_MATERIAL);
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10");
    glutDisplayFunc(display);
    glutMainLoop();
}

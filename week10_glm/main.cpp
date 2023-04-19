#include <GL/glut.h>
#include "glm.h" //�U��source.zip��glm.h��week10 glm�ؿ���
//glm.c ���ɦW��glm.cpp��bweek10 glm�ؿ���
//��glm.cpp�[��M�׸�
//��ҫ���(ex. Al. obj Al. mtl...) �ƻs��u�@����ؿ�
//Bulid log�̫�@��|�����b����(in C:\Users\...\freeglut\bin)
GLMmodel * pmodel = NULL; //���@�Ӽҫ�������, ���O�Ū�
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

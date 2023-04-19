#include <GL/glut.h>
#include "glm.h" //�U��source.zip��glm.h��week10 glm�ؿ���
//glm.c ���ɦW��glm.cpp��bweek10 glm�ؿ���
//��glm.cpp�[��M�׸�
//��ҫ���(ex. Al. obj Al. mtl...) �ƻs��u�@����ؿ�
//Bulid log�̫�@��|�����b����(in C:\Users\...\freeglut\bin)
///��Gundam.obj Gundam.mtl Diffuse.jpg���u�@����ؿ�
GLMmodel * pmodel = NULL; //���@�Ӽҫ�������, ���O�Ū�
//��week07���K�ϥ\��: OpenCV 2.1
//Setting-compiler
//myTexture
//�bglutCreateWindow()����[�@��mtTexture("Diffuse.jpg")
//glmDraw(pmodel, GLM_MATERIAL | GLM_TEXTURE);
#include <opencv/highgui.h> ///�ϥ� OpenCV 2.1 ���²��, �u�n�� High GUI �Y�i
#include <opencv/cv.h>
#include <GL/glut.h>
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCVŪ��
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV���m (�ݭncv.h)
    glEnable(GL_TEXTURE_2D); ///1. �}�ҶK�ϥ\��
    GLuint id; ///�ǳƤ@�� unsigned int ���, �s �K��ID
    glGenTextures(1, &id); /// ����Generate �K��ID
    glBindTexture(GL_TEXTURE_2D, id); ///�j�wbind �K��ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��T, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��S, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// �K�ϰѼ�, ��j�ɪ�����, �γ̪��I
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// �K�ϰѼ�, �Y�p�ɪ�����, �γ̪��I
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if (pmodel==NULL){
        pmodel = glmReadOBJ("Gundam.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel, 90);
    }
    glmDraw(pmodel, GLM_MATERIAL | GLM_TEXTURE);
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10");

    myTexture("Diffuse.jpg");
    glutDisplayFunc(display);
    glutMainLoop();
}

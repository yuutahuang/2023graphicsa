#include <opencv/highgui.h>
int main()
{
    ///�p�gL
    IplImage * img = cvLoadImage("image.jpg"); ///�p�߰��ɦW
    cvShowImage("week07", img);
    cvWaitKey(0);
}
///�Y���ѴN�O�w�˨B�J�X��

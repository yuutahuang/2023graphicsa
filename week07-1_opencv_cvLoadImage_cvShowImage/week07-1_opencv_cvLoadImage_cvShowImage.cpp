#include <opencv/highgui.h>
int main()
{
    ///小寫L
    IplImage * img = cvLoadImage("image.jpg"); ///小心副檔名
    cvShowImage("week07", img);
    cvWaitKey(0);
}
///若失敗就是安裝步驟出錯

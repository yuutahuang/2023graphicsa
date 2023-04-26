//.cpp檔不能執行, 因為找不到PlaySoundA
//PlaySoundA()在winmm裡面, 所以要手動把winmm加到lib咒語
//OpenCV要3條, GLUT要5條, PlaySound需要1條
//Setting-Compiler...的Linker Setting要加上winmm
#include <windows.h>
int main()
{                                                    //要等待同步
    PlaySound("C:\\Users\\gamey\\Downloads\\do.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\re.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\mi.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\fa.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\so.wav", NULL, SND_SYNC);
}

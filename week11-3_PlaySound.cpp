//.cpp�ɤ������, �]���䤣��PlaySoundA
//PlaySoundA()�bwinmm�̭�, �ҥH�n��ʧ�winmm�[��lib�G�y
//OpenCV�n3��, GLUT�n5��, PlaySound�ݭn1��
//Setting-Compiler...��Linker Setting�n�[�Wwinmm
#include <windows.h>
int main()
{                                                    //�n���ݦP�B
    PlaySound("C:\\Users\\gamey\\Downloads\\do.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\re.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\mi.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\fa.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\gamey\\Downloads\\so.wav", NULL, SND_SYNC);
}

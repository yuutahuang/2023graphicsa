#include <stdio.h>
int main()
{
    FILE * fin = fopen("file.txt", "r");///�e�@�d�Ҧ��g�ɮ�

    char line[100];
    fscanf(fin, "%s", line);
    printf("�qfile.txtŪ��F: %s\n", line);

    fscanf(fin, "%s", line);
    printf("�qfile.txtŪ��F: %s\n", line);
}

///week12-1 printf_fprintf
#include <stdio.h>
int main()
{///檔案指標 fout = 開檔案("檔名", "用什麼模式")
    FILE * fout = fopen("file.txt", "w"); ///w:write

    printf("Hello World\n");
    fprintf(fout, "Hello World在檔案裡\n");

}

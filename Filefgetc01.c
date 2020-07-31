#include <stdio.h>

void main()
{
    FILE *fp = NULL;
    char ch;

    //현재 경로에 Test.txt 파일을 생성하고 문자열을 쓴다.
    fp = fopen("Test.txt", "w");
    fputs("Test string!", fp);
    fclose(fp);

    //파일을 다시 개방한다.
    fp = fopen("Test.txt", "r");
    if (fp == NULL)
        return;

    //파일에서 한 글자씩 읽어와 다시 한 글자씩 출력한다.
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
}
#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp = NULL;
    char szBuffer[512] = { 0 };

    //파일을 생성해 여러 행의 문자열을 쓴 후 닫는다.
    fp = fopen("Test.txt", "w");
    fputs("Test\n", fp);
    fputs("String\n", fp);
    fputs("Data\n", fp);
    fclose(fp);

    //앞서 생성한 파일을 다시 개방한다.
    fp = fopen("Test.txt", "r");
    if (fp == NULL)
        return;

    //파일에서 '한 행'씩 끊어내서 읽어온다.
    while (fgets(szBuffer, sizeof(szBuffer), fp))
    {
        //읽어온 문자열을 화면에 출력한다.
        printf("%s", szBuffer);
        memset(szBuffer, 0, sizeof(szBuffer));
    }

    fclose(fp);
}
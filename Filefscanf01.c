#include <stdio.h>

void main()
{
    int nData = 0;
    char szBuffer[128] = { 0 };
    FILE *fp = NULL;

    //'읽기' 실험을 위한 파일을 생성하고, 'Test'라는 문자열을 쓴다.
    fp = fopen("fscanfTest.txt", "w");
    fprintf(fp, "%d, %s\n", 20, "Test");
    fclose(fp);

    //파일을 다시 열고 저장된 내용을 읽어 온다.
    fp = fopen("fscanfTest.txt", "r");
    fscanf(fp, "%d, %s", &nData, szBuffer);
    fclose(fp);

    //읽어온 내용을 화면에 출력한다.
    printf("%d, %s\n", nData, szBuffer);
}
#include <stdio.h>

typedef struct _USERDATA
{
    char szName[16];
    char szPhone[16];
}USERDATA;

void main()
{
    FILE *fp = NULL;
    USERDATA UserData = { "Ho-sung", "123-1234"};

    //바이너리 쓰기 모드로 파일을 개방(생성)한다.
    fp = fopen("Test.dat", "wb");
    if(fp == NULL) return;

    //구조체를 한 번에 바이너리 모드로 파일에 쓴다.
    fwrite(&UserData, sizeof(USERDATA), 1, fp);
    fclose(fp);
}
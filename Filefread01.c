#include <stdio.h>

typedef struct _USERDATA
{
    char szName[16];
    char szPhone[16];
} USERDATA;

void main()
{
    FILE *fp = NULL;
    USERDATA UserData = { 0 };
    
    //바이너리 읽기 모드로 파일을 개방한다.
    //만일 파일이 없다면 파일을 여는데 실패한다.
    fp = fopen("Test.dat", "rb");
    if(fp == NULL) return;

    //파일에서 바이너리 모드로 구조체를 한 번에 읽고 출력한다.
    fread(&UserData, sizeof(USERDATA), 1, fp);
    puts(UserData.szName);
    puts(UserData.szPhone);

    fclose(fp);
}
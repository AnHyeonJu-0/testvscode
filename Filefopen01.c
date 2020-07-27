#include <stdio.h>

void main()
{
    //파일 제어에 필요한 FILE 구조체에 대한 포인터 변수 선언 및 정의
    FILE *fp = NULL;
    //test.txt 파일을 쓰기 모드로 개방. 단, 같은 이름의 파일이 이미
    //존재하면 삭제(크기를 0으로 수정)하고 새 파일을 생성한다.
    //없다면 새로 생성한다.
    fp = fopen("Test.txt", "w");
    if(fp == NULL)
    {
        puts("ERROR: Failed to open file!");
        return;
    }

    //TODO: File I/O

    //개방한 파일을 닫는다.
    fclose(fp);
}
#include <stdio.h>
#include <string.h>

//구조체 선언 및 형 재선언
type struct USERDATA
{
    int nAge;
    char szName[32];
    char szPhone[32];
} USERDATA;

int main(void)
{
    //형 재선언 덕분에 변수를 선언할 때 'struct'를 생략할 수 있다.
    USERDATA user = { 0, "", "" };

    //구조체 멤버 접근 및 값 채우기
    user.nAge = 10;
    strcpy(user.szName, "Hoon");
    strcpy(user.szPhone, "010-1234-1234");

    //구조체 멤버 접근 및 출력
    printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);
    return 0;
}
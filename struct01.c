#include <stdio.h>
#include <string.h>

//구조체 선언
struct USERDATA
{
    int nAge;
    char szName[32];
    char szPhone[32];
};

int main(void)
{
    //USERDATA 구조체 변수 user 선언 및 정의
    struct USERDATA user = { 0, "", "" };

    //구조체 멤버 접근 및 값 채우기
    user.nAge = 10;
    strcpy(user.szName, "Hoon");
    strcpy(user.szPhone, "010-1234-1234");

    //구조체 멤버 접근 및 출력
    printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);
    return 0;
}
#include <stdio.h>

//USERDATA 구조체 선언 및 형 재선언
typedef struct USERDATA
{
    char szName[32];
    char szPhone[32];
    //USERDATA 구조체를 가리킬 수 있는 포인터를 멤버로 선언!
    struct USERDATA *pNext;
} USERDATA;

int main(void)
{
    //두 개의 USERDATA 구조체 인스턴스 선언 및 정의
    USERDATA user = { "김어준", "1234", NULL };
    USERDATA newUser = { "정봉주", "2345", NULL };

    //pNext 멤버를 이용해 두 인스턴스를 연결한다!!!
    user.pNext = &newUser;

    printf("%s, %s\n", user.szName, user.szPhone);
    //pNext 멤버를 이용해 구조상 다음 인스턴스에 접근한다.
    printf("%s, %s\n", user.pNext->szName, user.pNext->szPhone);
    return 0;
}
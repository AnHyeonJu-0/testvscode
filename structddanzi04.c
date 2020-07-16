#include <stdio.h>

//자기참조 구조체 선언
typedef struct USERDATA
{
    char szName[32];
    char szPhone[32];
    struct USERDATA *pNext;
} USERDATA;

int main(void)
{
    //배열로 USERDATA 구조체 인스턴스 넷을 선언 및 정의
    USERDATA userList[4] = {
        { "김어준", "1234", NULL },
        { "정봉주", "2345", NULL },
        { "주진우", "3456", NULL },
        { "김용민", "4567", NULL }
    };
    //연결 리스트의 첫 번째 인스턴스의 주소를 저장할 포인터
    USERDATA *pUser = NULL;

    //pNext 멤버를 배열의 순서상 다음 구조체 인스턴스의 주소로 정의한다.
    userList[0].pNext = &userList[1];
    userList[1].pNext = &userList[2];
    userList[2].pNext = &userList[3];
    //마지막 인스턴스는 뒤에 아무것도 없으므로 NULL로 초기화 한다.
    userList[3].pNext = NULL;

    //연결된 리스트의 첫 번째 인스턴스를 가리키도록 포인터를 정의한다.
    pUser = &userList[0];
    while(pUser != NULL)
    {
        //포인터가 가리키는 인스턴스의 멤버를 출력한다.
        printf("%s, %s\n", pUser->szName, pUser->szPhone);

        //현재 가리키고 있는 인스턴스의 다음 인스턴스를 가리키도록
        //포인터를 다음으로 '이동' 시킨다!
        pUser = pUser->pNext;
    }
    return 0;
}
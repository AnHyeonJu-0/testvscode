#include <stdio.h>

typedef struct USERDATA
{
    int nAge;
    char szName[32];
    char szPhone[32];
} USERDATA;

// 구조체 인스턴스가 아니라
// 구조체에 대한 '포인터'를 매개변수로 받는다. 따라서 효율적이다!
void GetUserData(USERDATA *pUser)
{
    scanf("%d%*c", &pUser->nAge);
    gets_s(pUser->szName, sizeof(pUser->szName));
    gets_s(pUser->szPhone, sizeof(pUser->szPhone));
}

int main(void)
{
    USERDATA user = { 0 };

    //Call by reference로 변경
    GetUserData(&user);
    printf("%d살\t%s\t%s\n",
        user.nAge, user.szName, user.szPhone);
    return 0;
}
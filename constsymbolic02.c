#include <stdio.h>

//'최대 길이'를 의미하는 심볼릭 상수 정의.
#define MAXLENGTH 32

int main(void)
{
    //전처리기로 정의한 심볼릭 상수로 배열을 선언할 수 있다.
    //char szName[32]와 같은 의미이다.
    char szName[MAXLENGTH] = { 0 };

    printf("이름을 입력하세요. : ");
    gets_s(szName, sizeof(char)* MAXLENGTH);
    return 0;
}
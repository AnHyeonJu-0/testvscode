#include <stdio.h>

int main(void)
{
    char szBuffer[32] = { "I am a boy."};
    //가리키는 대상을 상수화한 포인터 변수 선언 및 정의
    const char *pszBuffer = szBuffer;

    //문자 배열의 내용은 변경할 수 있다.
    szBuffer[0] = 'i';

    //포인터가 가리키는 대상을 간접지정할 수는 있지만 l-value로
    //사용할 수는 없다!
    *pszBuffer = 'i';
    return 0;
}
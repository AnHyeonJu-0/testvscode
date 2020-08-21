#include <stdio.h>

//매크로 함수 정의. 단, 실제 함수는 아니다!
#define ADD(a, b)(a + b)

//사용자 정의 함수 선언 및 정의
int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    //Add() 함수를 호출하고 반환 결과를 출력한다.
    printf("%d\n", Add(3, 4));

    //ADD() 매크로를 '실행'하고 결과를 출력한다.
    printf("%d\n", ADD(3, 4));
    return 0;
}
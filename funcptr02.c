#include <stdio.h>

//최댓값을 반환하는 함수 선언 및 정의
int GetMax(int a, int b, int c)
{
    int nMax = a;
    if (b > nMax) nMax = b;
    if (c > nMax) nMax = c;
    return nMax;
}

int __cdecl main(void)
{
    //int 매개변수 셋을 받아 int 자료를 반환하는 함수 포인터 선언 및 정의
    int(__cdecl *pfGetMax)(int, int, int) = GetMax;

    //함수 포인터를 이용해 함수를 호출한다.
    printf("MAX : %d\n", pfGetMax(1, 2, 3));
    return 0;
}
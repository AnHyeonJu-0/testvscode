#include <stdio.h>

int __cdecl main(void)
{
    //void*는 주소는 무엇이든 담을 수 있다.
    //함수이름은 '주소'이므로 void*에 담을 수 있다!
    void *pData = main;

    //함수의 주소를 출력한다.
    printf("%p\n", main);
    printf("%p\n", pData);
    return 0;
}
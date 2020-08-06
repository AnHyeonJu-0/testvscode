#include <stdio.h>

int main(void)
{
    int nData = 10;

    //포인터가 가리키는 대상을 상수화한다.
    const int *pnData = &nData;
    //포인터가 변수 자체를 상수화한다.
    int* const pnNewData = &nData;

    //아래 두 구문은 모두 에러
    *pnData = 20;
    pnNewData = NULL;
    return 0;
}
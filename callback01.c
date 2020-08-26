#include <stdio.h>
#include <stdlib.h>

//qsort() 함수가 역호출할 함수의 선언 및 정의
//main() 함수가 직접 이 함수를 호출하지 않는다!
int MyCompare(const void *pParam1, const void *pParam2)
{
    return *(int*)pParam1 - *(int*)pParam2;
}

int main(void)
{
    int aList[5] = { 30, 10, 40, 50, 20 };
    int i = 0;

    //배열 요소를 비교 방법을 규정한 MyCompare()함수의 주소를
    //qsort() 함수의 인수로 전달하고 qsort() 함수 내부에서 역호출 한다!
    qsort(aList, 5, sizeof(int), MyCompare);

    for ( i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);
    return 0;
}

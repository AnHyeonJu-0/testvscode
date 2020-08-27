#include <stdio.h>
#include <stdarg.h> //가변인자를 사용하기 위해 stdarg.h를 include한다.

int GetMax(int nCount, ...)
{
    int nMax = -9999, nParam = 0, i = 0;
    va_list pList = NULL; //char* 변수 pList의 선언 및 정의. va_list는 char*를 형 재선언한 것이다.

    va_start(pList, nCount); //va_start()매크로를 통해 첫 번째 매개변수 이후의 매개변수가 저장된 Stack 메모리의 주소를 pList에 저장한다.
    for(i = 0; i < nCount; ++i) //nCount 매개변수에는 가변인자의 개수가 담겨 있으므로 그 수만큼 반복문을 수행하여 나머지 매개변수들의 값을 알아낸다.
    {
        nParam = va_arg(pList, int); //가변인자들의 자료형이 int라고 가정하고, va_arg()매크로를 통해 pList가 가리키는 메모리의 내용을 해석하여 int형 변수인 nParam에 대입한다. 이때, va_arg() 매크로 내부에서 pList의 주솟값을 다음 매개변수가 저장된 메모리의 주소로 변경한다.
        if(nParam > nMax) nMax = nParam;
    }

    va_end(pList); //pList를 0으로 초기화한다.
    return nMax;
}

int main(void)
{
    printf("MAX: %d\n", GetMax(3, 10, 30, 20));
    printf("MAX: %d\n", GetMax(4, 40, 10, 30, 20));
    printf("MAX: %d\n", GetMax(5, 40, 10, 50, 30, 20));
    return 0;
}


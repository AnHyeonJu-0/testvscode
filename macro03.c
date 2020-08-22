#include <stdio.h>

//a를 "a"(문자열)로 변경하는 매크로 정의
#define STRING(a) #a

//a와 b를 합쳐 하나로 붙여주는 매크로 정의
#define PASTER(a, b) a##b

int main(void)
{
    int nData = 10;

    //PASTER(nDa, ta)는 그냥 nData라고 쓴 것과 같다.
    printf("%d\n", PASTER(nDa, ta));
    printf("%d\n", nData);

    //"nData"로 처리된다.
    printf("%s\n", STRING(nData));
    return 0;
}
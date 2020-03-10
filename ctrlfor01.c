#include <stdio.h>
int main(void)
{
    int i = 0;
    //계수의 초기화; 조건식; 계수기 증가
    for(i=0;i<5;++i)
    {
        printf("%dth\n",i);
        //제어의 흐름이 반복될 때 ++i를 실행하고 조건을 비교한다.
    }
    return 0;
}
#include <stdio.h>

int GetFactorial(int nParam)
{
    int nResult = 1, i = 0;
    //매개변수 값이 유효하지 않다면 0을 반환함으로써
    //호출자 함수에 오류를 알린다!
    if(nParam<1 || nParam > 10) return 0;

    for(i=1;i<=nParam;++i)
        nResult *= i;
    return nResult;
}
//화면 출력과 관련한 코드는 모두 main() 함수가 담당한다.
int main(void)
{
    int nResult = 0, nInput = 0;

    printf("계승을 구할 정수(0~10)를 입력하세요. :");
    scanf("%d", &nInput);
    if(nResult == 0)
    {
        puts("ERROR: 1~10 사이의 정수를 입력하세요.");
        return 0;
    }
    printf("Result: %d\n", nResult);
    return 0;
}
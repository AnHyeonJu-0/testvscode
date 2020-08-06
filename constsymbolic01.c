#include <stdio.h>

//전처리기로 심볼릭 상수를 정의할 수 있다.
#define CUTOFF 70

int main(void)
{
    int nInput = 0;

    printf("점수를 입력하세요. : ");
    scanf("%d", &nInput);

    //컴파일러는 컴파일하기 전에 CUTOFF를 70으로 치환한다.
    if (nInput >= CUTOFF)   printf("합격입니다.\n");
    else    printf("불합격입니다.\n");
    return 0;    
}
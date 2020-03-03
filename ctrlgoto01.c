#include <stdio.h>

int main(void)
{
    int nInput;

//레이블 이름 설정. goto문으로 이동할 수 있는 지점
INPUT:
    printf("Input number : ");
    scanf("%d", &nInput);

    //사용자가 입력한 값이 0~10 범위인지 검사하고 조건에 맞지 않으면
    //INPUT 레이블로 흐름을 변경한다.
    if(nInput < 0 || nInput > 10)
        goto INPUT;

    puts("End");
    return 0;
}
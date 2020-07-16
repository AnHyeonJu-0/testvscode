#include <stdio.h>

//비트필드 구조체 선언 및 정의
typedef struct _DATAFLAG
{
    unsigned char main : 1; //8비트 중 오른쪽 1비트
    unsigned char left : 2; //오른쪽 2~3번째 비트
    unsigned char right : 3; //오른쪽 4~6번째 비트
    unsigned char top : 2; //오른쪽 7~8번째 비트 (왼쪽 두 비트)
} DATAFLAG;

int main(void)
{
    //1비트 표현범위 : 0~1
    //2비트 표현범위 : 0~3 (4는 범위를 넘어선 값이다!)
    //3비트 표현범위 : 0~7
    DATAFLAG flagSwitch = { 0, 3, 7, 4 };

    printf("%d\n", flagSwitch.main);
    printf("%d\n", flagSwitch.left);
    printf("%d\n", flagSwitch.right);
    //4는 2비트 표현범위를 넘어선 값이므로 출력할 수 없다(0 출력).
    printf("%d\n", flagSwitch.top);

    printf("%X\n", *((unsigned char *)&flagSwitch));
    printf("%d\n", sizeof(flagSwitch));

    return 0;
}
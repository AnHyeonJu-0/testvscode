#include <stdio.h>

// 열거형 상소 ACTION 선언 및 정의
// MOVE는 0(int), JUMP는 1, ATTACK은 2
enum ACTION {MOVE, JUMP, ATTACK};

//형 재선언을 포함하는 열거형 상수 선언 및 정의
//RED는 100, GREEN은 101, BLUE는 102
typedef enum COLOR {RED=100, GREEN, BLUE} COLOR;

int main(void)
{
    enum ACTION act = MOVE;
    COLOR color = GREEN;

    //열거형 상수는 int형식 상수이다.
    printf("ACTION: %d, COLOR: %d\n", act, color);
    return 0;
}
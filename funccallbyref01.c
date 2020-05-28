#include <stdio.h>

//매개변수가 int *인 함수의 선언 및 정의
int Add(int *a, int *b)
{
    return *a + *b;
}

int main(void)
{
    int x = 3, y = 4;

    //Add() 함수를 호출할 때 지역변수의 주소를 실인수로 기술
    printf("%d\n", Add(&x, &y));
    return 0;
}
#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

int main(int argc, char* argv[])
{
    printf("%d\n", Add(3,4)); // 피호출자함수는 이 값을 매개변수로 받는다.
    return 0;
}
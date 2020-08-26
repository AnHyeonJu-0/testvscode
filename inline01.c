#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

__inline int NewAdd(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("%d\n", Add(3, 4));
    printf("%d\n", NewAdd(3, 4));
    return 0;
}
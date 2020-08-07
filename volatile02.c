#include <stdio.h>

int main(void)
{
    volatile int nData = 10;
    int i = 0;

    for(i = 0; i < 100; ++i)
        nData = 10;

    printf("%d\n", nData);
    return 0;
}
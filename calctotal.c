#include <stdio.h>
int main(void)
{
    int i = 0, sum = 0;
    while(i<10)
    {
        sum += ++i;
        ++i;
    }
    printf("Total:%d\n",sum);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int i = 0, nFact = 1;
    for(i=5; i>=1; --i)
        nFact *= i;

    printf("5! == %d\n", nFact);
    return 0;
}
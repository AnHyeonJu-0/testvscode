#include <stdio.h>

int main(void)
{
    char ch=0;
    int nIndex = 0;

    while((ch = getchar()) !='\n')
    {
        printf("%02d\t%c\n", nIndex, ch);
        ++nIndex;
    }   
    return 0;
}
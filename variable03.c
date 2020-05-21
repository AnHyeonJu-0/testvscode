#include <stdio.h>

int main(int argc, char* argv[])
{
    register int i = 0;
    printf("%d\n", i);
    printf("%p\n", &i);
    return 0;
}
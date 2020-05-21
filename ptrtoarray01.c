#include <stdio.h>

int main(int argc, char* argv[])
{
    char astrList[2][12] = {"Hello", "World"};
// char* *pstrList = astrList;
    char (*pstrList)[12] = astrList;

    puts(pstrList[0]);
    puts(pstrList[1]);
    return 0;
}
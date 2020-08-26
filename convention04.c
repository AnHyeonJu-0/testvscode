#include <stdio.h>

int __fastcall GetMax(int a, int b, int c)
{
    int nMax = a;
    if(b > nMax) nMax = b;
    if(c > nMax) nMax = c;
    return nMax;
}

int __cdecl main(void)
{
    int nResult = 0;
    nResult = GetMax(1, 2, 3);
    return 0;
}
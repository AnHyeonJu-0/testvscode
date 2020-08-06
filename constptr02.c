#include <stdio.h>

//매개변수가 상수형 포인터이다. 따라서 함수에서 포인터가 가리키는
//대상 메모리에 쓰기를 시도할 수 없다.
void PrintString(const char *pszParam)
{
    puts(pszParam);
}

int main(void)
{
    char szBuffer[32] = {"I am a boy."};

    //PrintString() 함수를 호출하더라도 szBuffer가 변경될 가능성은 없다.
    PrintString(szBuffer);
    PrintString("You are a girl.");
    return 0;
}
#include <stdio.h>
#include <string.h>

void main(void)
{
    char szBuffer[128] = { 0 };
    char szSet[128] = { 0 };
    char *pszStart = szBuffer;

    //검색 대상 문자열을 입력받는다.
    printf("Input string: ");
    gets(szBuffer);

    //찾을 '문자들'을 입력받는다.
    printf("Input character set: ");
    gets(szSet);

    //대상 문자열에 일치하는 문자가 있는지 검색한다.
    while((pszStart = strpbrk(pszStart, szSet)) != NULL)
    {
        printf("[%p] Index: %d, %c\n",
            pszStart, pszStart - szBuffer, *pszStart);

        //일치하는 하나를 찾았으므로 다음으로 이동하고 계속 찾는다.
        pszStart++;
    }

}
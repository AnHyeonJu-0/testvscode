#include <stdio.h>
#include <string.h>

char* mystrcat(char *pszDst, char *pszSrc)
{
    //대상 메모리에 저장된 문자열의 끝을 찾는다.
    while (*pszDst != '\0')
        ++pszDst;

    //그 뒤에 새로운 문자열을 이어 붙인다.
    while (*pszSrc != '\0')
        *pszDst++ = *pszSrc++;
    
    //맨 끝을 NULL문자로 마무리한다.
    *++pszDst = '\0';

    //이어 붙인 문자열의 마지막 글자가 저장된 메모리의 주소를 반환한다!
    return --pszDst;
}

int main(void)
{
    char szPath[128] = { 0 };
    char *pszEnd = NULL;

    //대상 메모리에 문자열을 붙인다.
    pszEnd = mystrcat(szPath, "C:\\Program Files\\");
    //앞서 반환받은 주소를 첫 번째 인수로 호출해 문자열을 붙인다.
    pszEnd = mystrcat(pszEnd, "CHS\\");
    pszEnd = mystrcat(pszEnd, "C programming");

    puts(szPath);
    return 0;
}
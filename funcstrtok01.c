#include <stdio.h>
#include <string.h>

void main(void)
{
    //토큰화 할 대상 문자열
    char szBuffer[128] = {"nData = x + y;\n nResult = a * b"};
    //토큰화의 기준이 되는 구분자 문자열
    char *pszSep = " *+=;\n";
    char *pszToken = NULL;

    //구분자 문자열을 근거로 첫 번째 토큰화를 시도한다.
    pszToken = strtok(szBuffer, pszSep);
    while (pszToken != NULL)
    {
        //찾은 토큰을 출력한다.
        puts(pszToken);
        //그다음 토큰을 이어서 검색한다.
        pszToken = strtok(NULL, pszSep);
    }

    //변경된 원본 문자열을 출력해본다.
    printf("\n szBuffer: %s\n", szBuffer);
}
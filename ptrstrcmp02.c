#include <stdio.h>
#include <string.h>

int main(void)
{
    char szBuffer[12] = {"TestString"};
    char *pszData = "TestString";

    //다음 코드들은 주소와 상관없이 대상 메모리에 저장된
    //문자열이 같은지 비교한다.
    //만일 길이가 다르면 무조건 같은 문자열이 아니다.
    printf("%d\n", strcmp(szBuffer, pszData));
    printf("%d\n", strcmp("TestString", pszData));
    printf("%d\n", strcmp("Test", "TestString"));

    return 0;
}
#include <stdio.h>

void PutData(char *pszParam)
{
    //문자열의 끝이면 더 이상 재귀호출을 하지 않고 반환한다.
    if(*pszParam == '\0')
    return;

    //다음 두 구문의 실행 순서를 바꾸면 문자열이 뒤집어져 출력한다.
    putchar(*pszParam);
    //다음 글자를 가리키는 주소를 매개변수로 재귀호출한다.
    PutData(pszParam + 1);
}

int main(void)
{
    PutData("TestData");
    putchar('\n');
    return 0;
}
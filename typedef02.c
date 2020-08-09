#include <stdio.h>

//포인터 변수를 형 재선언했다.
typedef const char *LPSTR;

int main(void)
{
    //'*' 기호가 없지만 pszData는 포인터 변수이다!
    LPSTR pszData = NULL;
    pszData = "HelloWorld";
    printf("%s\n", pszData);
    return 0;
}
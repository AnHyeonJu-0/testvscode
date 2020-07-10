#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    //유니코드 문자열 상수로 초기화
    wchar_t *pwszData = L"String";

    //MBCS 문자열을 담을 수 있는 배열
    char szData[32];
    size_t nConverted = 0;

    //변환된 문자열의 길이를 알아낸다.
    nConverted = wcstombs(NULL, pwszData, 32);
    printf("%d\n", nConverted);

    //유니코드 문자열을 MBCS 문자열로 변경해 szData 저장한다.
    nConverted = wcstombs(szData, pwszData, 32);

    //변환 결과를 출력한다.
    printf("%s (%d)\n", szData, nConverted);
}

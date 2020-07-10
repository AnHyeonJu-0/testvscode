#include <stdio.h>
#include <string.h>

int main(void)
{
    wchar_t *pwszData = L"String";
    wchar_t wszData[32];

    wcscpy(wszData, pwszData);
    wprintf(L"%s\n", wszData);

    return 0;
}
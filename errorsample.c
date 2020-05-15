#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char szBuffer[12] = { "Helloworld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(szBuffer) * 12);
	memcpy(pszData, szBuffer, 12);
	puts(pszData);
	free(pszData);
	return 0;
}

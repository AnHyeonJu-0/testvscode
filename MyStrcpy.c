#include <stdio.h>

void MyStrcpy(char* pszDst, int nDstSize, char* pszSrc)
{
	int i = 0, nLenSrc = 0;

	nLenSrc = strlen(pszSrc);
	if (nLenSrc + 1 > nDstSize)
		return nDstSize - (nLenSrc + 1);

	while (pszSrc[i] != NULL)
	{
		pszDst[i] = pszSrc[i];
		++i;
	}

	pszDst[i] = '\0';
	return nLenSrc;
}
int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}
#include <stdio.h>

int main(void)
{
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nTmp = 0;

	//여기에 코드
	for (i = 4; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			if (aList[j] > aList[j+1])
			{
				nTmp = aList[j];
				aList[j] = aList[j+1];
				aList[j+1] = nTmp;
			}
		}
	}
	//이하 코드는 수정 x
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	return 0;
}
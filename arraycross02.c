#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0; i < 5; ++i)
	{
		//짝수행과 홀수 행을 구별
		if (i % 2 == 0)
			//짝수행
			for (j = 0; j < 5; ++j)
				//순방향으로 행을 채운다.
				aList[i][j] = ++nCounter;
		else
			//홀수행
			for (j = 0; j < 5; ++j)
				//마치 보수를 취하듯 역방향 인덱스를 계산한다.
				aList[i][4 - j] = ++nCounter;
	}

	//배열 출력
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);

		putchar('\n');
	}
	return 0;
}

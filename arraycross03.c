#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, nOffset = 1;

	for (i = 0; i < 5; ++i)
	{
		//홀수 행과 짝수 행을 구별하고 첫 번째 요소의 초깃값을 결정
		if (i % 2 == 0) nCounter = i * 5;
		else nCounter = (i + 1) * 5 + 1;

		for (j = 0; j < 5; ++j)
		{
			//nOffset이 양수면 nCounter는 증가
			//음수면 반대로 감소
			nCounter += nOffset;
			aList[i][j] = nCounter;

		}
		//토글 스위치처럼 행마다 양수/음수로 변경된다.
		//여기서 '-'는 부호 변경 연산자이다.
		nOffset = -nOffset;
	}
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);

		putchar('\n');
	}
	return 0;
}
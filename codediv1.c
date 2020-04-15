#include <stdio.h>

int GetData(void)
{
	int D;

	printf("정수를 입력하세요.:");
	scanf_s("%d", &D);
	return D;
}

int GetMax(int a, int b, int c)
{
	int Max=0;

	if (a > Max)	Max = a;
	else if (b > Max)	Max = b;
	else if (c > Max)	Max = c;
	return Max;
}


int PrintData(int A, int B, int C, int D)
{
	int i = 0;
	int aList[3] = { 0 };


	for (i = 0; i < 3; ++i)
	{
		if (i == 0)	aList[i] = A;
		else if (i == 1) aList[i] = B;
		else if (i == 2) aList[i] = C;
	}
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", A, B, C, GetMax(aList[0], aList[1], aList[2]));
	return A, B, C, GetMax(aList[0], aList[1], aList[2]);
}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	//입력
	for (i = 0; i < 3; ++i)
		aList[i] = GetData();
	//최댓값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);

	//출력
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}
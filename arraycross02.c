#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0; i < 5; ++i)
	{
		//¦����� Ȧ�� ���� ����
		if (i % 2 == 0)
			//¦����
			for (j = 0; j < 5; ++j)
				//���������� ���� ä���.
				aList[i][j] = ++nCounter;
		else
			//Ȧ����
			for (j = 0; j < 5; ++j)
				//��ġ ������ ���ϵ� ������ �ε����� ����Ѵ�.
				aList[i][4 - j] = ++nCounter;
	}

	//�迭 ���
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);

		putchar('\n');
	}
	return 0;
}
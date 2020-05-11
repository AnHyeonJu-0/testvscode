#include <stdio.h>

int main(void)
{
	int nData = 10;
	printf("%s\n", "nData");

	//변수 nData에 들어 있는 값을 출력
	printf("%d\n", nData);
	//변수 nData의 메모리 주소를 출력
	printf("%p\n", &nData);
	return 0;
}
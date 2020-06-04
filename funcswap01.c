#include <stdio.h>

//매개변수로 주소를 받는다
void Swap(int* pLeft, int* pRight)
{
	//주소가 가리키는 대상의 메모리의 값을 교환한다.
	int nTmp = *pLeft;
	*pLeft = *pRight;
	*pRight = nTmp;
}
int main(int argc, char* argv[])
{
	int x = 10, y = 20;

	//호출자 함수에 선언된 지역변수의 주소를 전달한다
	//따라서 함수가 반환한 후 x와 y의 값은 서로 교환된다.
	Swap(&x, &y);
	printf("%d, %d\n", x, y);
	return 0;
}
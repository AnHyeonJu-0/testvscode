#include <stdio.h>

void main()
{
    FILE *fp = NULL;
    int nClosed = 0;
    fopen("Test1.txt", "w");
    fopen("Test2.txt", "w");
    fopen("Test3.txt", "w");

    //지금까지 개방한 파일들을 '모두' 닫는다. FILE*는 필요없다!
    nClosed = _fcloseall();
    printf("%d\n", nClosed);
}
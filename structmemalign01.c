#include <stdio.h>

typedef struct USERDATA
{
    char ch;
    int nAge;
} USERDATA;

typedef struct MYDATA
{
    char ch;
    int nAge;
    double dData;
} MYDATA;

int main(void)
{
    printf("%d\n", sizeof(USERDATA));
    printf("%d\n", sizeof(MYDATA));
    return 0;
}
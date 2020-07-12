#include <stdio.h>
#include <time.h>

void main()
{
    struct tm *ptime = {0};
    time_t t = 0;

    t = time(NULL);
    ptime = localtime(&t);

    printf("%d\n", t);
    printf("%s", ctime(&t));

    printf("%04d-%02d-%02d\n",
        ptime ->tm_year + 1900,
        ptime ->tm_mon + 1, ptime ->tm_mday);
}
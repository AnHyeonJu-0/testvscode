#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    char ch;
    printf("Do you want to EXIT? (Y/N)\n");
    ch = _getch();

    if(ch == 'y' || ch == 'Y')
    {
        puts("EXIT");
        exit(1);
    }

    puts("End of main( )");
}
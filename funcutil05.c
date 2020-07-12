#include <stdio.h>
#include <stdlib.h>

void main()
{
    char szCommand[512] = {0};
    printf("Input command: ");
    gets(szCommand);

    system(szCommand);
// system("notepad.exe");
}
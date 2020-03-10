#include <Stdio.h>
int main(void)
{
    int i=0,j=1;
    scanf("%d", &i);
    
    if(i>=2 && i <= 9)
    {
        while(j<10)
    {
        printf("%d * %d = %d \n", i, j, i*j);
        j++;
    }
    else
        puts("ERROR");
        
    return 0;
}
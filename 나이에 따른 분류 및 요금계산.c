include <stdio.h>
int main(void)
{
    int fee = 1000;
    int age = 0;

    scanf("%d", &age);

    if(age<=13)
    {
        if(age<=3)
        {
            fee = fee*(0/100);
            printf("최종요금 : %d", fee);
        }
        else
        {
            fee = fee*(50/100);
            printf("최종요금 : %d", fee);
        }    
    }
    else
    {
        if(age<=19)
        {
            fee = fee*(75/100);
            printf("최종요금 : %d", fee);
        }
        
        fee = fee*(100/100);
        printf("최종요금 : %d", fee);
    }
    

    return 0;
}
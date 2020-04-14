include <stdio.h>
int main(void)
{
    int fee = 1000, age = 0;
    double result=0;

    
    scanf("%d", &age);
    if(age>=65)
    {
        result = 1.00;
        
    }
    else if(age>=20)
    {
        result = 0.00;
    }

    else if(age<=19)
    {
        result = 0.75;
    }

    else if(age<=13)
    {
        result = 0.50;
    }

    else if(age<=3)
    {
        result = 1.00;
    }

    printf("최종요금 : %d", (int)(fee*result));
    return 0;
}
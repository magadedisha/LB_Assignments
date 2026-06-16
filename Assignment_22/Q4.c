#include<stdio.h>

void pattern (int no)
{

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= no; iCnt++)
    {
       printf("#\t %d\t *\t",iCnt);       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of element : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return  0;
}
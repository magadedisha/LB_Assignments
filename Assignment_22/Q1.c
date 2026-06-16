#include<stdio.h>

void pattern (int no)
{

    int iCnt = 0;
    char ch = '\0';
    
    for(iCnt = 1,ch ='A'; iCnt <= no; iCnt++,ch++)
    {
       printf("%c\t",ch);       
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
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 70;

    int Caculation = 0;

    Caculation = iNo * iDollar;

    return Caculation;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
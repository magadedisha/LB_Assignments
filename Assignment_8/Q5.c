/*
    1 Square feet = 0.0929 square meter
*/
#include<stdio.h>

double SquareMeter(int iValue)
{
    double const dSqMeter = 0.0929;

    double dArea_SqMeter = 0;
    
    dArea_SqMeter = iValue  * dSqMeter;
    
    return dArea_SqMeter;
}
int main()
    {
        int iValue = 0;
        double iRet = 0.0;

        printf("Enter Area in square feet : ");
        scanf("%d",&iValue);

        iRet = SquareMeter(iValue);

        printf("The Area in Square meter is : %lf",iRet);
        return 0;
    }

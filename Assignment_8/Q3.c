/*
    1 Kilometer = 1000 mter
*/
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;
    int iCalculation = 0;

    iCalculation = iNo * iMeter;

    return iCalculation;
}
int main()
    {
        int iValue = 0, iRet = 0;

        printf("ENter a Distance : ");
        scanf("%d",&iValue);

        iRet = KMtoMeter(iValue);

        printf("The distance in meter is : %d",iRet);
        return 0;
    }

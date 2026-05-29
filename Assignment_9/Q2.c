#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;     // Extract last digit
        
        if(iDigit % 2 != 0)    // Check if odd
        {
            iCount++;
        }
        
        iNo = iNo / 10;        // Move to next digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}

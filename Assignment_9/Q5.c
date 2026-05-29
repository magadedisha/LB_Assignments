#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;     // Extract last digit
        
        if(iDigit % 2 == 0)    // If even, add to even sum
        {
            iSumEven = iSumEven + iDigit;
        }
        else                   // If odd, add to odd sum
        {
            iSumOdd = iSumOdd + iDigit;
        }
        
        iNo = iNo / 10;        // Move to next digit
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}

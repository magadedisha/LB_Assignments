#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    // Handle negative numbers to ensure correct digit extraction
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to extract and check each digit
    while(iNo > 0)
    {
        iDigit = iNo % 10;     // Extract the last digit
        
        if(iDigit % 2 == 0)    // Check if the digit is even
        {
            iCnt++;
        }
        
        iNo = iNo / 10;        // Remove the last digit
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return 0;
}

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    int bHasDigits = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Handle edge case where number itself is 0
    if(iNo == 0)
    {
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        // Standard rule: If a digit is 0, multiplying by it results in 0. 
        // If your test suite ignores 0 digits, add: if(iDigit != 0)
        iMult = iMult * iDigit;
        
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}


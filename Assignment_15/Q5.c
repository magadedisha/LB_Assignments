#include <stdio.h>
#include <stdlib.h>

int Product(int arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;       // Initialize to 1 (1 * X = X)
    int iOddCount = 0;      // Tracks if we actually found any odd numbers

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Using != 0 handles both positive and negative odd numbers safely
        if (arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * arr[iCnt];
            iOddCount++;
        }
    }
    
    // If the array had NO odd numbers at all, return 0 instead of 1
    if (iOddCount == 0)
    {
        return 0;
    }

    return iProduct;
}

int main()
{
    int iSize, iCnt, iRet = 0;
    int *p = NULL;

    printf("Enter the no of elements you want to store : ");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if (p == NULL)
    {
        printf("Unable to provide memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);
    printf("The Product of odd numbers is : %d\n", iRet);

    free(p);
    return 0;
}
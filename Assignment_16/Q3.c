#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Function to find the difference between the largest and smallest number
int Difference(int Arr[], int iLength)
{
    // Handle edge case for empty or invalid array
    if (Arr == NULL || iLength <= 0)
    {
        return 0; 
    }

    // Initialize both max and min with the first element
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iCnt = 0;

    // Single loop to find both maximum and minimum values
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt]; // Update maximum
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt]; // Update minimum
        }
    }

    // Return the calculated difference
    return (iMax - iMin);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    // Dynamic memory allocation
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call the logic function
    iRet = Difference(p, iSize);

    printf("Difference between largest and smallest number is %d\n", iRet);

    // Free allocated memory
    free(p);

    return 0;
}
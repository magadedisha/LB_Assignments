#include<stdio.h>
#include<stdlib.h> // Required for malloc and free

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Function to find the largest number in the array
int Maximum(int Arr[], int iLength)
{
    int iMax = 0; 
    
    int iCnt = 0;

    iMax = Arr[0];
    // Loop through the rest of the elements to find a larger one
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt]; // Update maximum
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    // Using iSize instead of the typo iLength here
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    // Call the logic function
    iRet = Maximum(p, iSize);

    printf("Largest Number is %d\n", iRet);

    // Free the dynamically allocated memory
    free(p);

    return 0;
}
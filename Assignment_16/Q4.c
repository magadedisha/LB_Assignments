#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Function to display all numbers that contain exactly 3 digits
void Digits(int Arr[], int iLength)
{
    // Handle edge case for empty or invalid array
    if (Arr == NULL || iLength <= 0)
    {
        return;
    }

    int iCnt = 0;

    printf("Numbers containing 3 digits are: ");

    // Loop through all elements in the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iTemp = Arr[iCnt];
        int iDigitCount = 0;

        // Handle negative numbers by converting to absolute value
        if(iTemp < 0)
        {
            iTemp = -iTemp;
        }

        // Special check: if the number itself is 0, it has 1 digit
        if(iTemp == 0)
        {
            iDigitCount = 1;
        }
        else
        {
            // Count the number of digits mathematically
            while(iTemp > 0)
            {
                iDigitCount++;
                iTemp = iTemp / 10; // Eliminate the last digit
            }
        }

        // If the number has exactly 3 digits, print it
        if(iDigitCount == 3)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    // Call the logic function to print the 3-digit numbers
    Digits(p, iSize);

    // Free allocated memory
    free(p);

    return 0;
}
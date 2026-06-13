#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Function to display the summation of digits for each number
void DigitsSum(int Arr[], int iLength)
{
    // Handle edge case for empty or invalid array
    if (Arr == NULL || iLength <= 0)
    {
        return;
    }

    int iCnt = 0;

    printf("Summation of digits for each number:\n");

    // Loop through all numbers in the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iTemp = Arr[iCnt];
        int iSum = 0;        // Variable to hold the running total of digits
        int iDigit = 0;      // Variable to hold the separated digit

        // Handle negative numbers by converting to positive
        if(iTemp < 0)
        {
            iTemp = -iTemp;
        }

        // Separate and add digits until the number becomes 0
        while(iTemp > 0)
        {
            iDigit = iTemp % 10;   // Extract the last digit
            iSum = iSum + iDigit;  // Add the digit to your summation variable
            iTemp = iTemp / 10;    // Remove the last digit
        }

        // Print the final sum for the current array element
        printf("%d ", iSum);
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

    // Call the logic function to print the summation of digits
    DigitsSum(p, iSize);

    // Free allocated memory
    free(p);

    return 0;
}
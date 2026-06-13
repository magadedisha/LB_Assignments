#include <stdio.h>
#include <stdlib.h>

void Range(int arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {

        if (arr[iCnt] > iStart && arr[iCnt] < iEnd)
        {
            printf("%d\t", arr[iCnt]);
        }
    }
}

int main()
{
    int iSize, iCnt,iValue1, iValue2 = 0;
    int *p = NULL;

    printf("Enter the no of elements :");
    scanf("%d", &iSize);

    printf("Enter the start elememt :");
    scanf("%d", &iValue1);

    printf("Enter the last element :");
    scanf("%d", &iValue2);

    p = (int *)malloc(sizeof(int) * iSize);

    if (p == NULL)
    {
        printf("Unnable to provide memeory");
        return -1;
    }

    printf("Enter the elements : ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0;
}
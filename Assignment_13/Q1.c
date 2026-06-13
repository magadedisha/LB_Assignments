#include<stdio.h>
#include<stdlib.h>
int Difference(int arr[], int iLength)
{
    int iSum, iCnt = 0;
    int SumEven = 0;
    int SumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
            SumEven = SumEven + arr[iCnt];
        }
        else
        {
            SumOdd = SumOdd + arr[iCnt];
        }
    }

    iSum = SumEven - SumOdd;
    if(iSum < 0)
    {
        iSum = -(iSum);
    }
    return  iSum;
}


int main()
{

    int iSize, iRet, iCnt = 0;
    int *p = NULL;

    printf("Enter the no of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unnable to provide memeory");
        return -1;
    }

    printf("Enter the elements : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }


    iRet = Difference(p,iSize);
    printf("The Difference between summation of even and odd elements are : %d",iRet);

    free(p);
    return  0;
}
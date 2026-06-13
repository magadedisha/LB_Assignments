#include<stdio.h>
#include<stdlib.h>

#define  TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int arr[], int iLength , int iNo)
{
    int iCnt, iFreqCount = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            bFlag =  TRUE;
        }       
    }
    return bFlag;
}

int main()
{
    int iSize, iCnt, iFreqNo = 0;
    int *p = NULL;
    BOOL bRet =  FALSE;

    printf("Enter the no of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unnable to provide memeory");
        return -1;
    }

    printf("Enter the Frequency number  : ");
    scanf("%d",&iFreqNo);

    printf("Enter the elements : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iFreqNo);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("NUmber is not present ");

    }
    free(p);
    return  0;
}
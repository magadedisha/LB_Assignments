#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[], int iLength , int iNo)
{
    int iCnt, iFreqCount = 0;
    //int iOccurence = 0; 2nd approach with break

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt;
        
        }       
    }
    return -1;
}

int main()
{
    int iSize, iCnt, iFreqNo, iRet = 0;
    int *p = NULL;

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

    iRet = FirstOcc(p,iSize,iFreqNo);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d",iRet);

    }
    free(p);
    return  0;
}
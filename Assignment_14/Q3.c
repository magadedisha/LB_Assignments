#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE ;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            bFlag = TRUE;
        }
       
       
    }

       return bFlag;
}


int main()
{

    int iSize, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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


    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
         printf("11 is present.");

    }
    else
    {
           printf("11 is  not present.");
      
    }

    free(p);
    return  0;
}
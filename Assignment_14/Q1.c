#include<stdio.h>
#include<stdlib.h>
int CountEven(int arr[], int iLength)
{
    int iSum, iCnt = 0, iCountFreq;
   

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
            iCountFreq++;
        }
       
    }

   
    return  iCountFreq;
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


    iRet = CountEven(p,iSize);
    printf("The Frequency is : %d",iRet);

    free(p);
    return  0;
}
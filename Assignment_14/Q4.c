#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCnt, iFreqCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            iFreqCount++;
        }
       
    }

       return iFreqCount;
}


int main()
{

    int iSize, iCnt, iRet = 0;
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


    iRet = Frequency(p,iSize);

     printf("Frequency occurence is : %d", iRet);
      
    

    free(p);
    return  0;
}
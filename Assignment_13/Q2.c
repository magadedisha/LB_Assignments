#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] % 5 == 0)
        {
            printf("%d\t",arr[iCnt]);
        }
      
    }

}


int main()
{

    int iSize, iCnt = 0;
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

    Display(p,iSize);

    free(p);
    return  0;
}
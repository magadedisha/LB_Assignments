#include<stdio.h>

void MultiDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            printf("%d\t",(iNo * iCnt));
        }
}


int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    MultiDisplay(iValue);
    return 0;

}
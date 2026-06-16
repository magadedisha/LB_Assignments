/*ip : 8

op: 2   4   6   8   10  12  14  16
*/

#include<stdio.h>

void pattern (int no)
{

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= no; iCnt++)
    {
       printf("%d\t",iCnt * 2);       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of element : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return  0;
}
#include<stdio.h>

void DisplayDigit(int iNO)
{

    if (iNO < 0)
    {
        iNO = -iNO;
    }
  int iDigit = 0;
   
    while( iNO != 0)
    {
        iDigit = iNO % 10;
        printf("%d\n",iDigit);
        iNO = iNO / 10;
    }

}


int main()
{

    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}
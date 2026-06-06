#include<stdio.h>

int CountTwo(int iNO)
{
  int iDigit = 0;
  int iCount = 0;
   
    while( iNO != 0)
    {
        iDigit = iNO % 10;

        if(iDigit == 2)
        {
            iCount++;
        }  

        iNO = iNO / 10;
    }

    return iCount;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    
        printf("%d",iRet);
    
    return 0;
}
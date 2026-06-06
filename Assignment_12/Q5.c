#include<stdio.h>

int Count(int iNO)
{
  int iDigit = 0;
  int iCount = 0;
   
    while( iNO != 0)
    {
        iDigit = iNO % 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);
    
    printf("%d",iRet);
    
    return 0;
}
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL CheckZero(int iNO)
{
  int iDigit = 0;
   
    while( iNO != 0)
    {
        iDigit = iNO % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }  

        iNO = iNO / 10;
    }

    return FALSE;

}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet ==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not contains Zero");
    }
    return 0;
}
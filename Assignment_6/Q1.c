#include<stdio.h>

void Number(int iNo)
{
   if(iNo < 50)
   {
        printf("Nummber is Small");
   }
   else if(iNo >= 50 && iNo <= 100)
   {
        printf("Nummber is Medium");
   }
   else
   {        
        printf("Nummber is Large");
   }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;

}
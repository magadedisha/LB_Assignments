#include<stdio.h>

void pattern (int iRow, int iCol)
{
    int i, j = 0;
    char ch = '\0';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);       
        }
        printf("\n");
    }   
}

int main()
{
    int iValue1,iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);

    return  0;
}
#include <stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1; // This will keep track of the continuous count

    for (i = 1; i <= iRow; i++)
    {
        // Moved j++ into the standard for-loop syntax for cleaner code
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt);
            iCnt++; // Increment the counter after printing
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}
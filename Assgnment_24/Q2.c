#include <stdio.h>

void pattern(int iRow, int iCol)
{
    int i, j = 0;
    char ch1, ch2 = '\0';

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", ch2);
            }
            else
            {
                printf("%c\t", ch1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>    // Required for read() and close() system calls on Windows
#include <string.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[], char cValue)
{
    int i = 0;
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Array[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open File\n");
        return -1;
    }
    else
    {
        iRet = read(fd, Array, sizeof(Array) - 1);
        Array[iRet] = '\0';

        for (i = 0; i < strlen(Array); i++)
        {
            if (Array[i] == cValue)
            {
                iCount++;
            }
        }

        close(fd);
        return iCount;
    }
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter a file name which want to open : \n");
    scanf("%s", FileName);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);

    if (iRet != -1)
    {
        printf("Frequency is %d\n", iRet);
    }

    return 0;
}

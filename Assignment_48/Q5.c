#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>    // Required for read() and close() system calls on Windows
#include <string.h>

#define BUFFER_SIZE 1024

int DisplayN(char FName[], int iValue)
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
        lseek(fd,iValue,0);

        iRet = read(fd, Array, sizeof(Array) - 1);
        Array[iRet] = '\0';

        printf("Data from file is :  %s\n",Array);

        close(fd);
        return iCount;
    }
}

int main()
{
    char FileName[30];
    int iRet = 0;
    int iValue = 0;

    printf("Enter a file name which want to open : \n");
    scanf("%s", FileName);

    printf("Enter the value : \n");
    scanf("%d", &iValue);

    iRet = DisplayN(FileName, iValue);

    if (iRet != -1)
    {
        printf("Frequency is %d\n", iRet);
    }

    return 0;
}

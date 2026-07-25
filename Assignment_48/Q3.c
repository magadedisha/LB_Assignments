#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int CountWhite(char fName[])
{
    int i = 0;
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Array[BUFFER_SIZE] = {'\0'};

    fd = open(fName, O_RDONLY );

    if ((fd == -1))
    {
        printf("Unable to open File");
    }
    else
    {
        printf("File open successfully with fd : %d", fd);

        iRet = read(fd, Array, sizeof(Array) - 1);
        Array[iRet] = '\0';

        for (i = 0; i < strlen(Array); i++)
        {
            if ((Array[i] == ' '))
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
    int iRet = 0;
    char FileName[30] = {'\0'};

    printf("Enter a file name which want to open : \n");
    scanf("%s", &FileName);

    iRet = CountWhite(FileName);
    printf("\nNumber of white spaces are : %d", iRet);

    return 0;
}



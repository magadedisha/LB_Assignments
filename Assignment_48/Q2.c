#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024
int CountSmall(char fName[])
{
    int i = 0;
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Array[BUFFER_SIZE] = {'\0'};

    fd = open(fName, O_RDONLY | O_APPEND);

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
            if ((Array[i] >= 'a') && (Array[i] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
        close(fd);
    }
}

int main()
{
    int iRet = 0;
    char FileName[30] = {'\0'};

    printf("Enter a file name which want to open : \n");
    scanf("%s", &FileName);

    iRet = CountSmall(FileName);
    printf("\nNumber of Small characters are : %d", iRet);

    return 0;
}

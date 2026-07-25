#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 100
int main()
{
    int fd = 0;
    char fName[BUFFER_SIZE] = {'\0'}; 

    printf("Enter a file name which want to open : \n");
    scanf("%s",&fName);

    fd = open(fName,O_RDONLY | O_APPEND);

    if((fd == -1))
    {
        printf("Unable to open File");
    }
    else
    {
        printf("File opened successfully with fd : %d",fd);
        close(fd);
    }
    return 0;
}

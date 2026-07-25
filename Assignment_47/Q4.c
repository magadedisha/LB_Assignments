#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 100
int main()
{
    int fd = 0;
    int iRet = 0;
    char fName[BUFFER_SIZE] = {'\0'}; 

    printf("Enter a file name which want to check size : \n");
    scanf("%s",&fName);

    fd = open(fName,O_RDONLY | O_APPEND);

    if((fd == -1))
    {
        printf("Unable to check File size");
    }
    else
    {
        iRet = read(fd,fName,20);
        printf("File size is : %d bytes",iRet);
        close(fd);
    }
    return 0;
}

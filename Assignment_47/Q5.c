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
    char fMessage[BUFFER_SIZE] = {'\0'}; 

    printf("Enter a file name which want to write : \n");
    scanf("%s",&fName);

    fd = open(fName,O_RDWR| O_APPEND);

    if((fd == -1))
    {
        printf("Unable to Open file and write");
    }
    else
    {
        printf("Opened file with fd : %d \n",fd);

        printf("Enter a message to write in a file : \n");
        scanf(" %[^\n]", fMessage);

        write(fd,fMessage,strlen(fMessage));
        printf("Data written succesfully!!");

        close(fd);
    }
    return 0;
}

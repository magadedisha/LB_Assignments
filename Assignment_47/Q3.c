#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 100
int main()
{
    int fd = 0;
    char fName[BUFFER_SIZE] = {'\0'}; 
    int fData= 0; 

    printf("Enter a file name which want to read data : \n");
    scanf("%s",&fName);

    fd = open(fName,O_RDONLY | O_APPEND);

    if((fd == -1))
    {
        printf("Unable to read File");
    }
    else
    {
        printf("File opened successfully with fd : %d",fd);

        fData = read(fd, fName, sizeof(fName) - 1);
        fName[fData] = '\0';
        printf("\nData from files is : %s \n",fName);

        close(fd);
    }
    return 0;
}

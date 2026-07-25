#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 100
int main()
{
    int fd = 0;
    char fName[BUFFER_SIZE] = {'\0'}; 

    printf("Enter a file name which want to create : \n");
    scanf("%s",&fName);

    fd = creat(fName,0777);

    if((fd == -1))
    {
        printf("Unable to create File");
    }
    else
    {
        printf("File created successfully with fd : %d",fd);
    }
    return 0;
}

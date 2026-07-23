#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

int FirstOccur(PNODE first,int iNo)
{
    int iPos = 1;

    while(first != NULL)
    {
        if(first->data == iNo)
        {
            return iPos;
        }
        iPos++;
        first = first->next;
    }
    return -1; 
}

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int main()
{
    // Write C code here

    PNODE head = NULL;
   int Result = 0;
   int value = 0;
    Insert(&head, 10);
    Insert(&head, 21);
    Insert(&head, 10);
    Insert(&head, 11);
    Insert(&head, 10);

    printf("Enter a number : \n");
    scanf("%d",&value);

    Result =  FirstOccur(head,value);
    printf("First Occurence is : %d",Result);

    return 0;
}

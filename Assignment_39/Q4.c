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

void Display(PNODE first)
{
    if (first == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    while (first != NULL)
    {
        printf("| %d | --> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
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

int Frequny(PNODE first, int iNo)
{
    int iCount = 0; 
    while (first != NULL)
    {
        if (first->data == iNo)
        {
            iCount++;
        }
        first = first->next;
    }
    return iCount;

}

int main()
{
    // Write C code here

    PNODE head = NULL;
    int value = 0;
    int Result = 0;

    Insert(&head, 30);
    Insert(&head, 21);
    Insert(&head, 20);
    Insert(&head, 11);
    Insert(&head, 30);
    Display(head);

 
    printf("Enter a munber : \n");
    scanf("%d",&value);
    Result = Frequny(head, value);
    printf("Frequeny of number in a list  :  %d",Result);
  
    return 0;
}

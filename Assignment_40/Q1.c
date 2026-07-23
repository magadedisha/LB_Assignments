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
        if(first->data % 2 != 0)
        {
            printf("| %d | --> ", first->data);
        }
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

int main()
{
    // Write C code here

    PNODE head = NULL;
   
    Insert(&head, 30);
    Insert(&head, 21);
    Insert(&head, 20);
    Insert(&head, 11);
    Insert(&head, 10);
    Display(head);

    return 0;
}

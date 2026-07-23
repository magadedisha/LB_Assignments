#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool Search(PNODE first, int iNo)
{
    while (first != NULL)
    {
        if (first->data == iNo)
        {
            return true;
        }
        first = first->next;
    }
                return false;

}

int main()
{
    // Write C code here

    PNODE head = NULL;
    int value = 0;
    bool Result = false;

    Insert(&head, 51);
    Insert(&head, 31);
    Insert(&head, 21);
    Insert(&head, 11);
    Insert(&head, 1);
    Display(head);

    printf("Search an element  : \n");
    scanf("%d",&value);

    Result = Search(head, value);

    if (Result == true)
    {
        printf("Element is present inside list ");
    }
    else
    {
        printf("Element is NOT present inside list ");
    }
    return 0;
}

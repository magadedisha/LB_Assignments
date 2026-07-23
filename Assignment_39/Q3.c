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

int CountOdd(PNODE first)
{
    int iCount = 0; 
    while (first != NULL)
    {
        if (first->data % 2 != 0)
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
    int Result = 0;

    Insert(&head, 30);
    Insert(&head, 21);
    Insert(&head, 20);
    Insert(&head, 11);
    Insert(&head, 10);
    Display(head);

    Result = CountOdd(head);
    printf("Total Odd numbers present in list as :  %d",Result);
  
    return 0;
}

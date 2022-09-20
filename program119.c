// Singly Linear Linked list
/*
    InsertFirst
    InsertLast
    InsertAtPosition

    DeleteFirst
    DeleteLast
    DeleteAtPosition

    Display
    Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)       
    {
        *Head = newn;
    }
    else        
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("%d\t",Head -> data);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;     

    InsertFirst(&First,101);    
    InsertFirst(&First,51);    
    InsertFirst(&First,21);
    InsertFirst(&First,10);

    Display(First);

    return 0;
}


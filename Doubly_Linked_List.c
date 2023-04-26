// doubly linked list
// Date:3/20/2023

#include <stdio.h>

//structure definition;
struct node{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* Head;
//create a new node:

struct node* GetNewNode(int x)
{
    struct node* NewNode = (struct node*) malloc(sizeof(struct node));
    NewNode->data = x;
    NewNode->next = NULL;
    NewNode->prev = NULL;
    return NewNode;
}

//Insert data node at the head:

void InsertAtHead(int x)
{
    struct node* newnode = GetNewNode(x);
    if(Head == NULL)   // if the list is Empty
    {
        Head = newnode;
        return;
    }
    // if the list is not empty:

    Head->prev = newnode;
    newnode->next = Head;
    Head = newnode;
}

//Insert data node at the tail:

void InsertAtTail(int x)
{
    struct node* newnode = GetNewNode(x);
    if(Head == NULL)   // if the list is Empty
    {
        Head = newnode;
        return;
    }
    // if the list is not empty:
    struct node* temp = Head;

    while(temp->next != NULL)  //traversing at the end node;
        temp = temp->next;

    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
}


//Print and reverse print:

void Print()
{
    struct node* temp = Head;
    printf("Forward: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void ReversePrint()
{
    struct node* temp = Head;

    if (temp==NULL)
        return;

    while(temp->next != NULL) //traversing to the end of the list and pointing to the last node at the end;
        temp = temp->next;

    printf("Reverse: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

//main function to call other functions:

int main()
{
    Head = NULL;
    //calling insert at the head function:
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
    //calling insert at the tail function:
    InsertAtTail(8); Print(); ReversePrint();
    InsertAtTail(5); Print(); ReversePrint();
    InsertAtTail(3); Print(); ReversePrint();
}

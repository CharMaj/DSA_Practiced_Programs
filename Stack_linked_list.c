      //Stack based data structures using Linked list: insert/delete (PUSH/POP) at the TOP.
//Date: 03/21/2023

#include <stdio.h>

struct node{
    int data;
    struct node* link;
};
struct node* TOP = NULL;  //top of the stack

//PUSH the data at the head/top of the linked list stack
void Push(int x)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));

    temp->data = x;
    temp->link = TOP;
    TOP = temp;
}

//POP the top element of the linked list stack
void Pop()
{
    struct node* temp = TOP;
    if(TOP == NULL)
    {
        printf("Stack Empty, nothing to pop off!! \n");
        return;
    }
    TOP = temp->link;
    free(temp);
}

//Stack TOP details:
void Top()
{
    if(TOP == NULL)
    {
      printf("Stack Empty, nothing on TOP!! \n");
      return;
    }
    printf("Data = %d \n",TOP->data);
    //printf("Next link address = %p \n",TOP->link);
    //printf("Stack Top address = %p \n",TOP);
}

//Checking whether the stack is Empty or not:
void IsEmpty()
{
    if(TOP==NULL)
      printf("True: Stack Empty.\n");
    else
      printf("False: Stack is not Empty. \n");
}

void Print()
{
    struct node* temp = TOP;
    if(TOP == NULL)
    {
      printf("Stack Empty, nothing to Print!!\n");
      return;
    }
    printf("The stack is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void main()
{
  Top();
  IsEmpty();
  Push(2); Print();
  Push(3); Print();
  Push(4); Print();


  Pop();
  IsEmpty();
  Top();
}

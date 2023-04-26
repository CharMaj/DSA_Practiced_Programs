//inserting the node at the nth position in the linked list:
//D: 03/08/23

#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node* next;
};
struct node* head;

void insert(int data, int n)
{
    int i;

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(n==1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    struct node* temp1 = head;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
    }

      temp->next = temp1->next;
      temp1->next = temp;
}
void print()
{
    struct node* temp = head;
    printf("The list is: ");
        while(temp!=NULL)
        {
          printf("%d, ",temp->data);
          temp = temp->next;
        }
    printf("\n");
}
int main()
{

   head = NULL;
    insert(2,1);
    print();
    insert(5,2);
    print();
    insert(8,1);
    print();
    insert(3,3);
    print();
    insert(7,2);
    print();

}

//----------------------**********next program**********--------------------------------

//inserting the data at the beginning of the linked list:
//D: 03/08/23
/*
#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node* next;
};
struct node* head;

void insert(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print()
{
    struct node* temp;
    printf("The list is: ");
        while(temp!=NULL)
        {
          printf("%d, ",temp->data);
          temp = temp->next;
        }
    printf("\n");
}
int main()
{
  int n,i,x;
  head = NULL;
    printf("How many numbers?\n");
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter the number:");
            scanf("%d", &x);
            insert(x);
            print();
        }
   return 0;
}
*/

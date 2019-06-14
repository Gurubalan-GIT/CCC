//Program in C to insert data at beginning of linked list and then display it.
//Contributed By- Sahdev Kansal (rockingkansal02@gmail.com,https://github.com/SahdevKansal02)

#include<stdio.h>
#include<stdlib.h>

struct node
{ int info;
  struct node *next;
};
typedef struct node* Node;
Node start=NULL;
void display(Node);//Function to perform traversal of list
Node insertbeg(Node);//Function to perform insertion at beginning of list
int main()
{
     int choice;
     system("cls");
     start=insertbeg(start);
     display(start);
     printf(" Do You Want To Insert Again ? (1/0) ");
     scanf("%d",&choice);
     if(choice==1)
        main();
}
Node insertbeg(Node head)
{   struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    int item;
    printf(" Enter the data to insert at beginning : ");
    scanf("%d",&item);
    ptr->info=item;
    if(head==NULL)
      ptr->next=NULL;
    else
      ptr->next=head;
    head=ptr;
    return head;
}


void display(Node head)
{    struct node *ptr;
     ptr=(struct node *)malloc(sizeof(struct node));
     ptr=head;
     if(head==NULL)
     {
         printf(" Empty List \n");
         return;
     }
     int i=1;
     printf(" Starting Address is %u \n",head);
     while(ptr!=NULL)
     {   printf(" Element no %d :Info : %d Address of element : %u Address stored in next : %u \n",i,ptr->info,ptr,ptr->next);
         ptr=ptr->next;
         i=i+1;
     }
}

//Program in C to sort a linked list using selection sort.
//Time Complexity :O(n^2)
//Space Complexity :O(n)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10 //Size of linked list.
struct node
{
    int info;
    struct node *next;
}*start=NULL;
typedef struct node * Node;
int main()
{
    int i;
    Node ptr;
    void selectionsort(Node);
    srand(time(NULL));
    for(i=0;i<size;i++)
    {
        Node ptr,temp;
        ptr=(Node)malloc(sizeof(struct node));
        ptr->info=rand()%100; //Random linked list of given size is created.
        ptr->next=NULL;
        if(start==NULL)
        {
            start=ptr;
        }
        else
        {  temp=start;
           while(temp->next!=NULL)
              temp=temp->next;
           temp->next=ptr;
        }
    }
    printf(" Linked List Before Sorting Is -\n");
    ptr=start;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n Linked List After Sorting Is -\n");
    selectionsort(start);
    ptr=start;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->info);
        ptr=ptr->next;
    }
    return 0;
}

void selectionsort(Node start)
{
    Node ptr=start,temp,address;
    int var;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        address=temp;
        while(temp!=NULL)
        {
            if((address->info)>(temp->info))
                address=temp;
            temp=temp->next;
        }

        var=address->info;
        address->info=ptr->info;
        ptr->info=var;
        ptr=ptr->next;
    }

}




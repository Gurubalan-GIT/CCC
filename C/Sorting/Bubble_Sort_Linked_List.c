//Program to sort a linked list using bubble sort.
//Time Complexity- O(n^2)
//Space Complexity -O(1)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10 //Size of list
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
    system("cls");
    void bubblesort(Node);
    srand(time(NULL));
    for(i=0;i<size;i++)
    {
        Node ptr,temp;
        ptr=(Node)malloc(sizeof(struct node));
        ptr->info=rand()%100; //Creating linked list with random numbers.
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
    bubblesort(start);
    ptr=start;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->info);
        ptr=ptr->next;
    }
    return 0;
}

void bubblesort(Node start)
{
    int var,swap=1;
    Node temp,pretemp;
    Node ptr=NULL;
    while(ptr!=start->next&&swap)
    {
        int swap=0;
        pretemp=start;
        temp=start->next;
        while(temp!=ptr)
        {
            if((temp->info)<(pretemp->info))
            {
               temp->info=temp->info+pretemp->info;
               pretemp->info=temp->info-pretemp->info;
               temp->info=temp->info-pretemp->info;
               swap=1;
            }
            pretemp=temp;
            temp=temp->next;
        }
        ptr=pretemp;
    }

}


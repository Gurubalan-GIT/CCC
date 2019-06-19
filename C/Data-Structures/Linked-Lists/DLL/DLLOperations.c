/*
 * Created Date: Tuesday June 18th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev; 
};

struct node *head=NULL;
void append();
int length();
void addFront();
void insertAtPos();
void deleteLast();
void deleteFirst();
void deletePos();
void printSLL();
int main(){
    int ch,size=0;
    while(1){
        printf("\nSLL Operations:\n");
        printf("1.Append\n");
        printf("2.Length of SLL\n");
        printf("3.Add Element in the begenning\n");
        printf("4.Insert element at a given position\n");
        printf("5.Delete the last element\n");
        printf("6.Delete the first element\n");
        printf("7.Delete an element at a given position\n");
        printf("8.Print SLL\n");
        printf("9.Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: append();
            break;
        case 2: printf("\n%d",length(size));
            break;
        case 3: addFront();
            break;
        case 4: insertAtPos();
            break;
        case 5: deleteLast();
            break;
        case 6: deleteFirst();
            break;
        case 7: deletePos();
            break;  
        case 8: printSLL();
            break;
        case 9: exit(0);
            break;
        default: printf("Invalid choice!");
            break;
        }
    }
}

void append(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));//I'm typecasting because malloc() return type is void
    printf("Enter the node value-\n");
    scanf("%d",&temp->data);
    temp->next=NULL;//Usually not needed, it's by default NULL
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
    }
    else{   
        struct node *traverse;
        traverse=head;
        while(traverse->next != NULL){
            traverse=traverse->next;//Traversing through the list 
        }
        traverse->next=temp;
        temp->prev=traverse;
    }
}

void addFront(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the node value-\n");
    scanf("%d",&temp->data);
        temp->next=head;
        temp->prev=NULL;
        if(head!=NULL){
            head->prev=temp;
        }
        head=temp;
}

void insertAtPos(){
    int index,i,size=0;
    printf("Enter the index where you want to enter the node: \n");
    scanf("%d",&index);
    if(index==1){
        addFront();
    }else if(index==length(size)){
        append();
    }else{
        struct node *temp,*prev;
        prev=head;
        int pos=0,count=0;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the value of he node:\n");
        scanf("%d",&temp->data);
        for(i=2;i<=(index-1);i++){/*See here, if I have 1->2->33->44 and tell index=3, It'd mean my pointer goes till index = 2,
        hence, new node will be inserted between nodes 2 and 33 respectively, that is before the current index postion of the node!        
        */
            prev=prev->next;
        }
        temp->next=prev->next;
        prev->next=temp;
    }
}

void deleteLast(){
    struct node *prev,*cur;
    prev=head;
    cur=head;
    while(cur->next != NULL){
        cur=cur->next;
    }
    cur->prev->next=NULL;
    /*In case of SLL : while(prev->next!=cur){
        prev=prev->next;
    }
    prev->next=NULL;*/
}

void deleteFirst(){
    head=head->next;
    head->prev=NULL;
}

void deletePos(){
    int index,i,size=0;
    printf("Enter the index you want to delete the value from:\n");
    scanf("%d",&index);
    if(index==1){
        deleteFirst();
    }else if(index==length(size)){
        deleteLast();
    }else{
        struct node *prev;
        prev=head;
        for(int i=2;i<=index-1;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
    }
}

int length(int size){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){/*Why not ptr->next? you see, it helps only to traverse and while exiting the loop, it'll end up pointing the 
    last node, but cannot access the value of it!*/
        ptr=ptr->next;
        size++;
    }
    return size;
}

void printSLL(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;       
    }
}

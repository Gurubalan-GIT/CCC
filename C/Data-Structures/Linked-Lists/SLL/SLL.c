/*
 * Created Date: Friday June 14th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next; /*Keep in mind that node* next and node *next mean the same thing. But also keep in mind
    that int* x,y,z means, only x is a pointer here, not y and z. Don't get confused. 
    */
};

struct node *head=NULL;
void append();
void printSLL();
int main(){
    int ch;
    while(1){
        printf("\nSLL Operations:\n");
        printf("1.Append\n");
        printf("2.Print SLL\n");
        printf("3.Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: append();
            break;
        case 2: printSLL();
            break;
        case 3: exit(0);
            break;
        default: printf("Invalid choice!");
            break;
        }
    }
}

void append(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the node value-\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{   
        struct node *traverse;
        traverse=head;
        while(traverse->next != NULL){
            traverse=traverse->next;
        }
        traverse->next=temp;
    }
}

void printSLL(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;       
    }
}
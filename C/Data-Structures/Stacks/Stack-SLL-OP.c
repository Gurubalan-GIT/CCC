/*
 * Created Date: Thursday June 20th 2019
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
void push();
void pop();
void peek();
void printStack();
struct node *head=NULL;

int main(){
    int ch,size=0;
    while(1){
        printf("\nStack-SLL Operations:\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Print Stack\n");
        printf("5.Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: peek();
            break;
        case 4: printStack();
            break;
        case 5: exit(0);
            break;
        default: printf("Invalid choice!");
            break;
        }
    }
}

void push(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the stack value-\n");
    scanf("%d",&temp->data);
    if(head==NULL){
            temp->next=NULL;
            head=temp;
    }else{
        temp->next=head;
        head=temp;
    }
}

void pop(){
    if(head==NULL){
        printf("Underflow\n");
    }else{
        head=head->next;
    }
}

void peek(){
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Underflow\n");
    }else{
        printf("%d",ptr->data);
    }
}

void printStack(){
    struct node *ptr;
    ptr=head;   
    if(ptr==NULL){
        printf("Stack is empty.");
    }else{
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;       
        }
    }
}
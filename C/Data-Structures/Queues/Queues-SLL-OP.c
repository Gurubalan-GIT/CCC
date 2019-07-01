/*
 * Created Date: Saturday June 22nd 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue();
void dequeue();
void printQueue();

int main(){
    int ch;
    while(1){
        printf("\nQueue-SLL Operations:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.printQueue\n");
        printf("4.Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: enqueue();
            break;
        case 2: dequeue();
            break;
        case 3: printQueue();
            break;
        case 4: exit(0);
            break;
        default: printf("Invalid choice!");
            break;
        }
    }
}

void enqueue(){
    struct node* temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node to be added into the queue:\n");
    scanf("%d",&temp->data);
    if(front == NULL && rear==NULL){ //Empty queue
        front=temp;
        rear=temp;
        front->next=NULL;
        rear->next=NULL;
    }else{
        rear->next=temp;
        rear=temp;
        rear->next=NULL;
    }
}
void dequeue(){
    if(front==NULL && rear == NULL){
        printf("Queue is empty!");
    }else{
        front=front->next;
    }
}
void printQueue(){
    struct node *ptr;
    ptr=front;
    if(front==NULL && rear==NULL){
        printf("Queue is empty!\n");
    }else{
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
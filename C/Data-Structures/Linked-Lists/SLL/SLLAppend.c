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
int main(){
    int n;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number of nodes you want to add at the end:\n");
    scanf("%d",&n);
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{   
        struct node *traverse;
        head=traverse;
        while(traverse->next != NULL){
            traverse=traverse->next;
        }
        traverse->next=temp;
    }
    struct node *ptr;
    ptr=head;
    printf("%d",ptr->data);

}
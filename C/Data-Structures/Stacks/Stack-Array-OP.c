/*
 * Created Date: Thursday June 20th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<stdio.h>
#include<stdlib.h>
int stack[100],i,j,ch,n,top=-1;
void push();
void pop();
void printStack();
int peek();
int main(){
    printf("Enter the number of elements you want to enter in the stack:\n");
    scanf("%d",&n);
    while(1){
        printf("1.Push\n2.Pop\n3.Print Stack\n4.Peek\n5.Exit\n");
        printf("Enter your choice :\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: printStack();
            break;
        case 4: if(peek()==0){printf("Underflow\n");}else{printf("%d\n",peek());};
            break;
        case 5: ; exit(0);
            break;
        default: printf("Invalid choice, try again\n");
            break;
        }
    }
}

void push(){
    int data;
    if(top==n){
        printf("Stack Overflow\n");
    }else{
        printf("Enter the data:\n");
        scanf("%d",&data);
        top=top+1;
        stack[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        top=top-1;
    }
}

void printStack(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int peek(){
    if(top==-1){
        return 0;
    }else{
        return stack[top];
    }
}
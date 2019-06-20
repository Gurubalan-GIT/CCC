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
void peek();
int main(){
    while(1){
        printf("Enter the number of elements you want to enter in the stack:\n");
        scanf("%d",&n);
        printf("1.Push\n2.Pop\n3.Print Stack\n4.Exit\n");
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
        case 4: peek();
            break;
        case 5: ; exit(0);
            break;
        default: printf("Invalid choice, try again\n");
            break;
        }
    }
}

void push(){

}

void pop(){

}

void printStack(){

}

void peek(){

}
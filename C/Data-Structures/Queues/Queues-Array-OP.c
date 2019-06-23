/*
 * Created Date: Saturday June 22nd 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
 #include<stdio.h>
 #include<stdlib.h>
 void enqueue();
 void dequeue();
 void printQueue();
 int front =-1,rear=-1,queue[100],n,ch;
 void main(){
     printf("Enter the number of elements you want to enter in the Queue:\n");
    scanf("%d",&n);
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Print Queue\n4.Exit\n");
        printf("Enter your choice :\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: enqueue();
            break;
        case 2: dequeue();
            break;
        case 3: printQueue();
            break;
        case 4: ; exit(0);
            break;
        default: printf("Invalid choice, try again\n");
            break;
        }
    }
 }

 void enqueue(){
     int data;
     if(rear==n-1){
         printf("Overflow\n");
     }else{
         printf("Enter the data you want to add to the queue:\n");
         scanf("%d",&data);
         if(rear==-1 && front ==-1){
             front=0;
             rear=0;
         }else{
             rear=rear+1;
         }
         queue[rear]=data;
     }    
 }

 void dequeue(){
     if(front==-1 || front>rear){
         printf("Underflow\n");
     }else{
         if(front==rear){
             front=-1;
             rear=-1;
         }else{
             front=front+1;
         }
     }
 }

 void printQueue(){
     int i;
     if(rear==-1){
         printf("Queue is empty!\n");
     }else{
         for(i=front;i<=rear;i++){
             printf("%d\n",queue[i]);
         }
     }
 }
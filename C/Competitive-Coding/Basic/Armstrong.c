/*
 * Created Date: Wednesday June 26th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */

// TCS Questions  
#include<stdio.h>
int main(){
    int number,temp1=0,temp2,temp3=0;
    printf("Enter the number-\n");
    scanf("%d",&number);
    temp2=number;
    while(number!=0){
        temp1=number%10;
        temp3=temp3+(temp1*temp1*temp1);
        number=number/10;
    }
    if(temp2==temp3){
        printf("Yes");
    }else{
        printf("No");
    }
}
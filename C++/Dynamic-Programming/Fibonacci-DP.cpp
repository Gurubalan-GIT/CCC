/*
 * Created Date: Saturday July 13th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int result=0;
int fib(int n);
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}

int fib(int n){
    int memo[n+1]={0};
    if(memo[n]!=0){
        return memo[n];
    }
    if(n==1 || n==2){
        result = 1;
    }else{
        result=fib(n-1)+fib(n-2);
    }
    memo[n]=result;
    return result;
}
/*
 * Created Date: Saturday July 13th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
#include<cmath>
using namespace std;
int result=0;
int fib(int n){
    if(n<=2){
        result = 1;
    }else{
        result = fib(n-1)+fib(n-2);
    }
    return result;
}
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(fib(i)*fib(i));
    }
    cout<<sum;
}
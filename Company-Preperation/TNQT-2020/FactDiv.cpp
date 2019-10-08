/*
 * Created Date: Saturday July 13th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */

//Check if factorial of n is divisible by sum of squares first n natural numbers
#include<iostream>
int fact(int n);
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int result=fact(n);
    for(int i=1;i<=n;i++){
        sum+=(i*i);
    }
    if(result%sum==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
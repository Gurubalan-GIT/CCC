/*
 * Created Date: Thursday April 11th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int n,mem,sum=0;
    int osmem=100;
    int a[100];
    cout<<"Enter the memory to be allocated:\n";
    cin>>mem;
    mem=mem-osmem;
    cout<<"Memory allocated = "<<mem<<" Remaining is allocated to OS\n";
    cout<<"Enter the number of processes:\n";
    cin>>n;
    cout<<"Enter the memory to be allocated\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }

    cout<<"Total memory left = "<<mem-sum<<endl;
    cout<<"Total memory used = "<<sum<<endl;

    for(int i=0;i<n;i++){
        cout<<"Memory allocated to Process "<<(i+1)<<"= "<<a[i]<<endl;
    }
    return 0;
}
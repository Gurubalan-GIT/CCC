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
    int osmem=100,a[100];
    int mem,fixedmem,feasable,holes,n=0;
    cout<<"Enter the memory to be allocated:\n";
    cin>>mem;
    mem=mem-osmem;
    cout<<mem<<" has been allocated, remaining is allocated for the OS\n";
    cout<<"Enter the fixed memory:\n";
    cin>>fixedmem;
    cout<<"Enter the number of processes:\n";
    cin>>n;
    cout<<"Enter the memory to be allocated to the processes:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        feasable=fixedmem-a[i];
        if(feasable==0){
            cout<<"This is feasable but no memory holes as fixed memory is equal\n";
        }else if(feasable<0){
            cout<<"Memory is overflown as fixed memory is lesser\n";
        }else{
            cout<<"This process is feasable that is holes = "<<feasable<<" and memory allocated is - "<<a[i]<<endl;
            holes=holes+feasable;
        }
    }
    cout<<"Hole memory left out = "<<holes<<endl;
    cout<<"Total memory left out = "<<mem-(n*fixedmem)+holes<<endl;
    return 0;
}
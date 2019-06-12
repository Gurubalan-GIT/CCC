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
    int osmem=100,a[100],partitionmem[100];
    int mem,feasable,holes,n,sum=0;
    cout<<"Enter the memory to be allocated:\n";
    cin>>mem;
    mem=mem-osmem;
    cout<<mem<<" has been allocated, remaining is allocated for the OS\n";
    cout<<"Enter the number of processes:\n";
    cin>>n;
    cout<<"Enter the memory to be allocated to the processes:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the memory for the partitions:\n";
    for(int i=0;i<n;i++){
        cin>>partitionmem[i];
    }


    for(int i=0;i<n;i++){
        feasable=partitionmem[i]-a[i];
        if(feasable==0){
            cout<<"No memory holes as partioned memory is equal\n";
        }else if(feasable<0){
            cout<<"Memory is overflown as partitioned memory is lesser\n";
        }else{
            cout<<"This process is feasable that is holes = "<<feasable<<" and memory allocated is - "<<a[i]<<endl;
            holes=holes+feasable;
        }
    }

    for(int i=0;i<n;i++){
        sum=sum+partitionmem[i];
    }
    cout<<"Hole memory left out = "<<holes<<endl;
    cout<<"Total memory left out = "<<mem-(sum+holes);
    return 0;
}
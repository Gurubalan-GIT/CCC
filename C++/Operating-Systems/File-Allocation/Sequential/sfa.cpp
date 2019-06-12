/*
 * Created Date: Wednesday April 10th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int n,allocated,st,len,count=0;
    int blocks[100];
    //0=Unallocated and 1=Allocated 
    for(int i=0;i<100;i++){
        blocks[i]=0;
    }

    /* See Sequential is different than Linked access, so you don't need the user to give allocated blocks already and ask them to choose a block
    to allocate */
    cout<<"Enter the starting index and length of the block to be allocated :\n";
    cin>>st>>len;

    for(int i=st;i<(st+len);i++){
        if(blocks[i]==0){
            count++; //I'm keeping a count here to see the count of all unallocated files is equal to the length specified 
        }
    }

    if(len==count){ 
        for(int i=st;i<st+len;i++){
            if(blocks[i]==0){
                blocks[i]=1;
                cout<<"Allocated the block "<<i<<" = "<<blocks[i]<<endl;
            }
        }
    }else{
        cout<<"File is not allocated in the disk";
    }

}
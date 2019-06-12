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
    int n,allocation,st,len=0;
    int blocks[100];
    for(int i=0;i<100;i++){
        blocks[i]=0;
    }
    cout<<"Enter the number of blocks to be allocated:-\n";
    cin>>n;
    cout<<"Enter the blocks you want to allocate:\n";
    for(int i=0;i<n;i++){
        cin>>allocation;
        blocks[allocation]=1;
    }

    cout<<"Enter the starting index and the length of the block to be allocated:\n";
    cin>>st>>len;
    int k=len;
    if(blocks[st]==0){
        for(int i=st;i<(st+k);i++){
            if(blocks[i]==0){
                blocks[i]=1;
                cout<<"This block "<<i<<" is allocated : "<<blocks[i]<<endl;
            }else{
                cout<<"This block "<<i<<" is already allocated : "<<blocks[i]<<endl;
                k++;
            }
        }
    }else{
        cout<<"Starting block is already allocated : "<<blocks[st]<<endl;
        cout<<"Try something else\n";
    }
}
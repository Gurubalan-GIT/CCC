/*
 * Created Date: Tuesday April 9th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int n,ttat,twt,temp1,temp2,temp3=0;
    int process[100],bt[100],wt[100],tot[100],at[100];
    cout<<"Enter number of processes:\n";
    cin>>n;
    cout<<"Enter the burst times-:\n";
    for(int i=0;i<n;i++){
        process[i]=i;
    }

    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    cout<<"Enter the arrival times:\n";
    for(int i=0;i<n;i++){
        cin>>at[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                temp1=bt[i];
                bt[i]=bt[j];
                bt[j]=temp1;

                temp2=at[i];
                at[i]=at[j];
                at[j]=temp2;

                temp3=process[i];
                process[i]=process[j];
                process[j]=temp3;
            }
        }
    }

    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }

    for(int i=0;i<n;i++){
        tot[i]=wt[i]+bt[i];
    }

    for(int i=0;i<n;i++){
        cout<<process[i]<<"\t"<<bt[i]<<"\t"<<at[i]<<"\t"<<wt[i]<<"\t"<<tot[i]<<endl;
    }
    
}
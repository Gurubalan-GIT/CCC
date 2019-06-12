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
    int n,t1,t2,t3=0;
    int bt[100],process[100],wt[100],tat[100],priority[100]; //Arrival time is taken to be 0 for all - Same arrival time 
    cout<<"Enter the number of processes:-\n";
    cin>>n;
    cout<<"Enter the burst times-\n";
    for(int i=0;i<n;i++){
        process[i]=i;
    }

    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    cout<<"Enter the priority -\n";
    for(int i=0;i<n;i++){
        cin>>priority[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(priority[i]<priority[j]){
                t1=process[i];
                process[i]=process[j];
                process[j]=t1;

                t2=bt[i];
                bt[i]=bt[j];
                bt[j]=t2;

                t3=priority[i];
                priority[i]=priority[j];
                priority[j]=t3;
            }
        }
    }

    //Waiting time calculation
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }

    //Turn around time calculation

    for(int i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
    }

    cout<<"Result is -\n";

    for(int i=0;i<n;i++){
        cout<<process[i]<<"\t"<<bt[i]<<"\t"<<priority[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
    }
     return 0;
}
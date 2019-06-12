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
    int n,twt,ttat,temp1,temp2=0;
    int bt[100],at[100],wt[100],tat[100],st[100];
    cout<<"Enter number of processes -\n";
    cin>>n;
    cout<<"Enter burst times -\n";
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    cout<<"Enter arrival time -\n";
    for(int i=0;i<n;i++){
        cin>>at[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(at[i]>at[j]){
                temp1=at[i];
                at[i]=at[j];
                at[j]=temp1;

                temp2=bt[i];
                bt[i]=bt[j];
                bt[j]=temp2;
            }
        }
    }

    st[0]=0;
    wt[0]=0;
    for(int i=1;i<n;i++){
        st[i]=st[i-1]+bt[i-1];
        wt[i]=st[i]-at[i];
    }

    for(int i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }

    cout<<"Burst time\t\t"<<"Arrival time\t\t"<<"Waiting time\t\t"<<"Turn Around time\n";
    for(int i=0;i<n;i++){
        cout<<bt[i]<<"\t\t\t\t"<<at[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<endl;
    }
}
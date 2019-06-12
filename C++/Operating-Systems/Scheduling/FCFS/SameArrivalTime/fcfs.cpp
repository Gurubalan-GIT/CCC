/*
 * Created Date: Monday April 8th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int n=0,twt=0,ttat=0;
    int burst[100],wt[100],tot[100];
    cout<<"Enter number of processes:\n";
    cin>>n;
    cout<<"Enter the burst times for the processes:\n";
    for(int i=0;i<n;i++){
        cin>>burst[i];
    }
    //This means always the first one is zero and moreover this under the assumption that arrival time is zero for all the processes 
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+burst[i-1];
    }
    //Turn around time 
    for(int i=0;i<n;i++){
        tot[i]=burst[i]+wt[i];
    }   

    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " << " Turn around time\n"; 
  
    for (int  i=0; i<n; i++) 
    {  
        twt=wt[i]+twt;
        ttat=tot[i]+ttat;
        cout << "   " << i+1 << "\t\t" << burst[i] <<"\t    "
            << wt[i] <<"\t\t  " << tot[i] <<endl; 
    } 

    cout<<"Average tot ="<<ttat/n<<endl;
    cout<<"Average wt ="<<twt/n;
    return 0;
}

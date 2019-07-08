/*
 * Created Date: Monday July 8th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int n,products[101],count[101];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>products[i];
    }
    for(int k=0;k<n;k++){
        count[k]=0;
    }
    for(int j=0;j<n+1;j++){
        if(products[j]==products[j+1]){
            count[j]++;
        }
    }
    for(int x=0;x<n;x++){
        if(count[x]%2!=0){
            cout<<products[x]<<endl;
        }
    }
}
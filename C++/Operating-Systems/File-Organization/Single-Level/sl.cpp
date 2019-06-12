/*
 * Created Date: Monday May 6th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int fileno,i,newalloc=0;
    char files[100][100], fname[100], dirname[100];
    cout<<"Enter the directory name:\n";
    cin>>dirname;
    cout<<"Enter the number of files you want to create:\n";
    cin>>fileno;
    cout<<"Enter the file name you want to create:\n";
    cin>>fname;
    //Checking if the new file name is taken or not
    for(i=0;i<fileno;i++){
        if(!strcmp(fname,files[i])){
            break;
        }
    }

    if(i==fileno){
        strcpy(files[newalloc++],fname);
        fileno++;
    }
    else{
        cout<<"The file name "<<fname<<"is already taken!\n";
    }

    cout<<"Directory name=:"<<dirname<<endl;
    cout<<"Files present:\n";
    for(int i=0;i<newalloc;i++){
        cout<<files[i];
    }
}
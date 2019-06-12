/*
 * Created Date: Monday May 6th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int nf,n,pages[100],frames[100];
    int isHit=0,j=0,pfcount=0;
    cout<<"Enter number of pages you want to enter:\n";
    cin>>n;
    cout<<"Enter the pages or Page sequence:\n";
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    cout<<"Enter the number of frames:\n";
    cin>>nf;

    //Initialize frame arrays, these signify the unallocated frames basically
    for(int i=0;i<nf;i++){
        frames[i]=-1;
    }

    //Here I'm traversing over the pages basically and assigning frames to each page, we will traverse into the frames array within this loop
    for(int i=0;i<n;i++){
        cout<<"\nFor "<<pages[i]<<" : ";
        //Checking for page hit if any frame is equal to the page
         for(int x=0;x<nf;x++){
            if (frames[nf]==pages[n])
            {
                isHit=1;
                break;
            } 
        }
        //Now if no hit, then we have to replace and page fault becomes incremented 
        if(isHit==0){

            for(j=0;j<nf-1;j++){
                //Here I'm copying the next array element's value to the present one, so the whole srray moves upwards 
                frames[j]=frames[j+1];
            }
            frames[j]=pages[i];//Remember that we terminated in nf-1, so after the increment of the last loop, we will have nf stored in J
            //Hence we can assign that position as the new value. When another value comes, this moves upwards the array. 
            pfcount++;
            for(int k=0;k<nf;k++){
                if(frames[k]!=-1){
                    //Printing only the changed/uptaded values
                    cout<<frames[k]<<" ";
                }
            }
        }
    }
    cout<<endl<<pfcount;
}

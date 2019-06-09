//Program in C to sort an array using insertion sort (2nd Version ).
//Time Complexity : O(n^2)
//Space Complexity : O(1)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10 //Size of array

int main()
{
    int arr[size];
    int i;
    void insertionsort(int*,int);
    printf("\n Array Before Sorting Is -\n");
    srand(time(NULL));
    for(i=0;i<size;i++)
    {
        arr[i]=rand()%100; //Random list of given size is created.
        printf(" %d ",arr[i]);
    }
    printf("\n Array After Sorting Is -\n");
    insertionsort(arr,size);
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
void insertionsort(int arr[],int n)
{
    int i,j,temp;
    for(i=n-2;i>=0;i--)
    {
        temp=arr[i];
        j=i+1;
        while(arr[j]<temp&&j<=n-1)
        {
            arr[j-1]=arr[j];
            j++;
        }
        j--;
        arr[j]=temp;
    }
}

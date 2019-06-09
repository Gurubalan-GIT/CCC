//Program To Sort An Array Using Gnome Sort.
//Time Complexity :O(n^2)
//Space Complexity :O(1)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10 //Size of array

void gnomesort(int *,int);
int main()
{
    int i;
    int * arr;
    srand(time(NULL));
    arr =(int *)malloc(sizeof(int)*size);
    printf("\n Array before sorting is \n");
    for(i=0; i <size; ++i)
       {
           arr[i] = rand()%100; // Random array of given size
           printf(" %d ",arr[i]);
       }
    printf("\n Array after sorting is \n");
    gnomesort(arr,size);
    for(i=0;i<size;i++)
            printf(" %d ",arr[i]);
    return 0;
}
void gnomesort(int arr[],int m)
{
    int index=0;
    int temp;
    while(index<m)
    {
        if(index==0)
            index++;
        if(arr[index]>=arr[index-1])
            index++;
        else if(arr[index]<arr[index-1])
        {
           temp=arr[index];
           arr[index]=arr[index-1];
           arr[index-1]=temp;
           index--;
        }
    }
}

//Program in C to sort an array using insertion sort.
//Time Complexity :O(n^2)
//Space Complexity :O(1)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
void insertionsort(int *,int);

int main()
{
    int *arr;
    arr=(int *)malloc(sizeof(int)*size);
    printf(" Before Sorting Array is \n");
    srand(time(NULL));
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%100;
        printf(" %d ",arr[i]);
    }
    printf("\n After Sorting by insertion sort Array is \n");
    insertionsort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}
void insertionsort(int *arr,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(temp<=arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

//Program in C to implement quick sort using Lomuto Partitioning Scheme.
//Time Complexity (average and best case) :O(nlogn)
//Time Complexity (worst case) :o(n^2)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 10 //Size Of Array
int lomuto(int *,int,int);
void quicksort(int *,int,int);

int main()
{
    system("cls");
    int arr[n],i;
    srand(time(NULL));
    printf(" Array Before Sorting is \n");
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100; //Random list of given size.
        printf(" %d ",arr[i]);
    }
    printf("\n After Sorting Array Is \n");
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }

    return 0;
}
void quicksort(int arr[],int low,int high)
{
    if(high>low)
    { int p=lomuto(arr,low,high);
      quicksort(arr,low,p-1);
      quicksort(arr,p+1,high);
    }
}
int lomuto(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j=low;
    int temp;
    for(j=low;j<=high;j++)
    {
        if(arr[j]<=pivot)
        {
          i++;
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
    }
    return i;
}

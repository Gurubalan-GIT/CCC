// Program to sort an array using merge sort (Recursive implementation).
// Time Complexity :O(nlogn);
// Space Complexity :O(n);
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10 //Size of array

void mergesort(int *,int,int);
void merge(int *,int,int,int);
int main()
{
    int i;
    int * arr;
    arr = (int*)malloc(sizeof(int)*size);
    srand(time(NULL));
    printf("\n Array before sorting is \n");
    for(i = 0; i < size; ++i)
        { arr[i] = rand()%100; //Random list of given size is created.
          printf(" %d ",arr[i]);
        }
    printf("\n Array after sorting is \n");
    mergesort(arr,0,size-1);
    for(i=0;i<size;i++)
          printf(" %d ",arr[i]);
    return 0;
}
void mergesort(int *arr,int start,int end)
{
     if(end>start)
     {
         int middle=(start+end)/2;
         mergesort(arr,start,middle);
         mergesort(arr,middle+1,end);
         merge(arr,start,middle,end);
     }
}
void merge(int *arr,int start,int middle,int end)
{
     int temp[size];
     int i=start;
     int j=middle+1;
     int k=start;
     while((i<=middle)&&(j<=end))
     {
         if(arr[i]<=arr[j])
            {
              temp[k]=arr[i];
              i++;
            }
         else if (arr[i]>arr[j])
            {
              temp[k]=arr[j];
              j++;
            }
     k++;
     }
     if(i>middle)
     {
         while(j<=end)
         {
             temp[k]=arr[j];
             j++;
             k++;
         }
     }
     if(j>end)
     {
         while(i<=middle)
         {
             temp[k]=arr[i];
             i++;
             k++;
         }
     }

 for(i=start;i<k;i++)
       arr[i]=temp[i];
}


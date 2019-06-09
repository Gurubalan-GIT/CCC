//Program in C to implement Radix Sort on array.
//Time complexity :O(n+m)
//Space complexity :O(n+m)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
#define radix 10
int main()
{
    void radixsort(int*,int);
    void countingsort(int *,int,int);
    int maxelement(int *,int);
    int *arr,i;
    arr=(int *)malloc(sizeof(int)*size);
    printf("\n Array before sorting is -\n");
    srand(time(NULL));
    for(i=0;i<size;i++)
    {
        arr[i]=rand()%100; //Random list of given size and range is created.
        printf(" %d ",arr[i]);
    }
    radixsort(arr,size);
    printf("\n Array after sorting is -\n");
    for(i=0;i<size;i++)
        printf(" %d ",arr[i]);
    return 0;
}
int maxelement(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
void countingsort(int arr[],int n,int a)
{
    int i;
    int counting[radix]={0};
    int newarr[n];
    for(i=0;i<n;i++)
        counting[(arr[i]/a)%10]++;
    for(i=1;i<radix;i++)
        counting[i]=counting[i]+counting[i-1];
    for(i=n-1;i>=0;i--)
    {
        newarr[counting[(arr[i]/a)%10]-1]=arr[i];
        counting[(arr[i]/a)%10]--;
    }
    for(i=0;i<n;i++)
        arr[i]=newarr[i];
}
void radixsort(int arr[],int n)
{
   int max=maxelement(arr,n);
   for(int a=1;max>0;a=a*10)
   {
       countingsort(arr,n,a);
       max=max/10;
   }
}

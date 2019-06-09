//Program in C to implement Counting sort on an array.
//Time Complexity :O(n+n)
//Space Complexity:O(n+m)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
#define range 100

int main()
{
    void countingsort(int *,int);
    int i,*arr;
    arr= (int *)malloc(sizeof(int)*size);
    srand(time(NULL));
    printf(" Array Before Sorting Is : \n");
    for(i=0;i<size;i++)
        {
            arr[i]=rand()%range; //Random Array of given size and range.
            printf(" %d ",arr[i]);
        }
    countingsort(arr,size);
    return 0;
}
void countingsort(int arr[],int m)
{
    int counting[range],i;
    int finalarr[m+1];
    for(i=0;i<range;i++)
        counting[i]=0;
    for(i=0;i<m;i++)
        counting[arr[i]]=counting[arr[i]]+1;
    for(i=1;i<range;i++)
        counting[i]=counting[i]+counting[i-1];
    for(i=m-1;i>=0;i--)
    {
        finalarr[counting[arr[i]]]=arr[i];
        counting[arr[i]]=counting[arr[i]]-1;
    }
    printf("\n Array After Sorting Is - \n");
    for(i=1;i<m+1;i++)
        printf(" %d ",finalarr[i]);
}




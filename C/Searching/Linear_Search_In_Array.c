//Program In C To Perform Linear Search In An Array.
#include<stdio.h>
#include<stdlib.h>

int linear_search(int *,int,int);
int main()
{
    int *arr,size,i;
    int x;
    printf(" Enter size of array : ");
    scanf("%d",&size);
    arr=(int *)malloc(sizeof(int)*size);
    printf("\n Enter array \n ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\n Enter element to search ");
        scanf("%d",&x);
    int index=linear_search(arr,size,x);
    if(index==-1)
        printf("\n Not present \n");
    else
        printf("\n Position %d ",index+1);
    return 0;
}
int linear_search(int arr[],int size,int x)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}

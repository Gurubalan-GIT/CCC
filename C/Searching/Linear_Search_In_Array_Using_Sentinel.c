//Program In C To Perform Linear Search In An Array Using Sentinel(Dummy Value).
/*The Basic linear search algorithm make two comparison per iterations :One to
  check if element is present in array or not and other to check if end of list
  has not come. But using sentinel second condition can be avoided , Hence
  reducing total number of comparisons */
//Contributed By- Sahdev Kansal (rockingkansal02@gmail.com,https://github.com/SahdevKansal02)

#include<stdio.h>
#include<stdlib.h>

int linear_search_s(int *,int,int);
int main()
{
    int *arr,size,i;
    int x;
    printf(" Enter size of array : ");
    scanf("%d",&size);
    arr=(int *)malloc(sizeof(int)*(size+1));
    printf("\n Enter array \n ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\n Enter element to search ");
        scanf("%d",&x);
    int index=linear_search_s(arr,size,x);
    if(index==-1)
        printf("\n Not present \n");
    else
        printf("\n Position %d ",index+1);
    return 0;
}
int linear_search_s(int arr[],int size,int x)
{
    arr[size]=x;
    int i=0;
    while(arr[i]!=x)
        i++;
    if(i==size)
        return -1;
    else
        return i;
}

// Program in C to sort an array using bubble sort.
// Time Complexity-O(n^2)
// Space Complexity -O(1)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10 //Size of array
void bubble(int *,int);
int main()
{
    system("cls");
    int arr[size];
    int i;
    srand(time(NULL));
    printf(" Array Before Sorting Is -\n");
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%100;  //Random Array Of Given Size Is Created.
        printf(" %d ",arr[i]);
    }
    printf("\n Array After Sorting Is - \n");
    bubble(arr,size);
    for(i=0;i<size;i++)
    printf(" %d ",arr[i]);

}
void bubble(int *ar,int m)
{
    int i,j,temp;
    int complete=1;
    for(i=0;i<m-1&&complete;i++)
   {
       for(j=0;j<m-i-1;j++)
       {
           complete=0;
           if(ar[j]>ar[j+1])
           {
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
               complete=1;
           }
       }
   }
}

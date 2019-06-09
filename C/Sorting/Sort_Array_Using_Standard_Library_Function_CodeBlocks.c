//Program to sort an array using standard qsort() function in C.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int compare(const void *a,const void *b)
{
    return(*(int *)a - *(int *)b;
}

int main()
{
    int *ptr,size;
    int i;
    system("cls");
    printf("\n Enter Size Of Array : ");
    scanf("%d",&size);
    ptr=(int *)malloc(sizeof(int)*size);
    srand(time(NULL));
    printf("\n Array Before Sorting is \n");
    for(i=0;i<size;i++)
    {
        ptr[i]=rand()%100;
        printf(" %d ",ptr[i]);
    }
    printf("\n Array After Sorting is \n");
    qsort(ptr,size,sizeof(int),compare);
    for(i=0;i<size;i++)
    {
        printf(" %d ",ptr[i]);
    }
    return 0;
}

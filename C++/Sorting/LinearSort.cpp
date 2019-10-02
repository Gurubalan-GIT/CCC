#include<iostream>
using namespace std;
int main()
{
int i,n,j,temp,a[n];
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[i]>a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
   }
}
cout<<"Sorted array is: ";
for(i=0;i<n;i++)
  cout<<a[i];
}

//This code will sort the array in descending manner. 

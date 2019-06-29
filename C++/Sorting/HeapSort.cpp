#include<bits/stdc++.h>
using namespace std;
// Function to Insert an element into the Heap
void insert(vector<int> &tree, int n, int item)
{
	n = n+1;
	int ptr = n-1;
	tree[ptr] = item;
	while(ptr)
	{
		int par = floor((ptr-1)/2);
		// start from the leaf and go up to the root until heap property is not violated
		if(tree[ptr] > tree[par]) swap(tree[ptr],tree[par]);
		ptr = par;
	}
	
}
//Function to delete an element from the Heap and store the value into Item
void del(vector<int> &tree, int n, int &item)
{
	item = tree[0];
	int last = tree[n-1];
	int ptr = 0;
	int left = 1, right = 2;
	/* Start from the root and go down in top down manner until the heap property is not violated*/
	while(right<n)
	{
		// Correct position of last element of the array is found
		if(last>=tree[left] && last>=tree[right])
		{
			tree[ptr] = last;
			return;
		}
		// Check whether the left one is greater or right, we go to the higher one
		if(tree[right]<=tree[left])
		{
			tree[ptr] = tree[left];
			ptr = left;
		}
		else
		{
			tree[ptr] = tree[right];
			ptr = right;
		}
		left = 2*ptr + 1;
		right = 2*ptr + 2;
	}
	// check whether the last element goes to the last node of the heap or not
	if(left==n-1 && last<tree[left]) ptr = left;
	tree[ptr] = last;
}
//Function to implement the heap sort algorithm
void heapsort(vector<int> &A, int N)
{
	/* First we insert all the elements in such a way that the given array is in heap form */ 
	for(int j=0;j<N;++j) insert(A,j,A[j]);
	int j = N;
	while(j)
	{
		int item;
		//We repeatedly delete the root of the heap and store the value at the end of the heap.
		del(A,j,item);
		//j-1 is the index of the element which is at it's correct place in sorted order
		A[j-1] = item;
		// We iteratively decrease the size of the heap and increase the size of the sorted array from back of the array
		j--;
	}
}
int main()
{
	vector<int> A = {10,20,15,30,40,5,2,5,2,3};
	heapsort(A,A.size());
	for(int i=0;i<A.size();++i) cout<<A[i]<<" ";
	cout<<endl;
	
	
}
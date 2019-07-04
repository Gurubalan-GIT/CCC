/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
   '''' DIVIDE (into subproblems)-> CONQUER (solve sub problems) -> COMBINE (solved subproblems) ''''
 * MergeSort using Recursion : Time complexity:O(nlogn)
   n is the number of inputs
 *
 */
 
 
 class MergeSort 
 {
	 void mergeSort(int a[],int p,int r)
	 {
		 if(p==r)
			 return ;
		 else
		 {
			 q=(p+r)/2;   //Divide
			 mergeSort(a,p,q);  // subproblems
			 mergeSort(a,q+1,r); //  subproblems
			 merge(a,p,q,r); //merge them
		 }
			 
	 }
	 
	 void merge(int a[],int p,int q,int r)
	 {
		 int n1=q-p+1;
		 int n2=r-q;
		 int l[]=new int[n1];
		 int r[]=new int[n2];
		 l[n1]=Integer.MAX_VALUE;
		 r[n2]=Integer.MAX_VALUE;
		 int i=0,j=0;
		 for(int k=0;k<r;k++)
		 {
			 if(l[i]<=r[j])
			 {
				 a[k]=l[i];
				 i+=1;
			 }
			 else if(r[j]<=l[i])
			 {
				 a[k]=r[j];
				 j+=1;
			 }
		 }
	 }
	 public static void main(String []args)
	 {
		 int arr[]={2,5,1,3,7,4};
		 MergeSort mergesort=new MergeSort();
		 mergesort.mergeSort(arr,0,arr.length()-1);
		 
	 }
 }
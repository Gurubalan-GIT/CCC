/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;

public class BubbleSort {

	public static void main(String[] args) {
		int a[]= {10,28,4,3,15,88,100,0};
		
		int i,j,temp;
		for(i =0;i<a.length;i++)
		{
			for( j=0;j<a.length;j++)
			{
				
				//Ascending code for descending it will be if(a[j] < a[j+1])
				if(a[j] > a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		
		//Print the sorted Array
		for(int k =0;k<a.length;k++)
		{
		System.out.println(a[k]+ " ");
		}
		

	}

}

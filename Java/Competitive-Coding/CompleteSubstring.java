/**
Given a String s, we need to find a smallest substring such that it should contain all the distinct characters of a String s.
 */
import java.util.*;
import java.io.*;
import java.math.*;
class SubString
{   
    void matchFind(String s)
	{
	    HashMap<Character,Integer> hashMap=new HashMap<>(); //or u can use character array
        int count1=0,count2=0;
		int len=s.length();
		 //count is  task1
	
        for(int i=0;i<len;i++)
		{
			if(hashMap.get(s.charAt(i))==null)
			{
				count1++;
				hashMap.put(s.charAt(i),1);
			}
			else
				hashMap.put(s.charAt(i),hashMap.get(s.charAt(i))+1);
		}
         
	   //Array is better
	   int sub_length=0,start=0;
	   int optimal_length=Integer.MAX_VALUE;
	   int arr[]=new int[256]; //since the largest ascii value(1 byte size is 256)
       for(int j=0;j<len;j++)
	   {        arr[s.charAt(j)]++;
               if(arr[s.charAt(j)]==1)
		         count2++; 
		   
            if(count2==count1)
			{
			   /*We think that we have achieved but not yet,
			    our aim is to get substring of min length 
				so we iterate from start(0 index) and remove one by one
				character that repeated and increment start,update the length of substring size
				*/
				while( arr[s.charAt(start)]>1)
				{
					 arr[s.charAt(start)]--;//We are dropping that character from our answer
					 start++;
				}
				sub_length=j-start+1;
				if(optimal_length>sub_length)
				{
					optimal_length=sub_length;
					
				}
				
			}
			
	   }
     System.out.println(s.substring(start,start+optimal_length));	   
	}
	public static void main(String []args)
	{
	//This is a adhoc problem - No particular algorithm to solve(achieved through practice-PMMP :))
		//task1: find the lenght of distinct characters- use hashMap data structure
		//task2: Iterate and increment the repetitions
		//task3: When length of task1 matches the count in task2 ..
		SubString substring=new SubString();
		substring.matchFind("dabbcabcd");
	}
}
/*
Input:
dabbcabcd

output:
abcd
*/
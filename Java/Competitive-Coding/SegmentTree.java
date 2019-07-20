/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{   
    int getNextPower2(int num)
	{
		if(num==0)
		  return 1;
		if((num&(num-1))==0)
		  return num;
		while((num&(num-1))>0)
		{
			num=num&(num-1);
		}
		return num*2;
	}
     void segmentTree(int input[],int segment[],int start,int end,int pos)
	{ 
		if(start==end){
		   segment[pos]=input[start];
		   return;
		}
	
		  	int mid=(start+end)/2;
		  	segmentTree(input,segment,start,mid,2*pos+1);
		  	segmentTree(input,segment,mid+1,end,2*pos+2);
		  	segment[pos]=segment[2*pos+1]+segment[2*pos+2];
		 
	}
	int freqSegment(int []a,int []fs,int qlow,int qhigh,int start,int end,int pos)
	{
         if(qlow<=start&&qhigh>=end)
             return fs[pos];
             
         if(qlow>end||qhigh<start)
           return Integer.MIN_VALUE;
         
         int mid=(start+end)/2;
             return Math.max(freqSegment(a,fs,qlow,qhigh,start,mid,2*pos+1),
                             freqSegment(a,fs,qlow,qhigh,mid+1,end,2*pos+2));
         
	}
	public static void main (String[] args) throws java.lang.Exception
	{    
	    Codechef cc=new Codechef();
		// your code goes here
          BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
          String s[]=bf.readLine().split("\\s+");
          int n=Integer.parseInt(s[0]);
          int q=Integer.parseInt(s[1]);
          int a[]=new int[n]; //1->head 0->tail
          s=bf.readLine().split("\\s+");
          for(int i=0;i<a.length;i++)
             a[i]=Integer.parseInt(s[i]);
          int freqSeg[]=new int[(cc.getNextPower2(n)*2)-1];
          for(int i=0;i<freqSeg.length;i++)
            freqSeg[i]=Integer.MIN_VALUE; 
            
          cc.segmentTree(a,freqSeg,0,a.length-1,0);
          while(q-->0)
          {   s=bf.readLine().split("\\s+");
              int start=Integer.parseInt(s[0]);
              int end=Integer.parseInt(s[1]);
              System.out.println(cc.freqSegment(a,freqSeg,2,4,0,a.length-1,0));
          }
          
	}
}

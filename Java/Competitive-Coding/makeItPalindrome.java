/**
 * Created Date:  June 22nd 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Problem Description: https://www.spoj.com/problems/PALIN/
 */
 import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	  BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
	  int t=Integer.parseInt(bf.readLine());
	  int len2=0,pal=0;
	  boolean flag=true;
	  StringBuffer s;
	  while(t-->0)
	  {
	  	String s1,s2,mid="";
	  s=new StringBuffer(bf.readLine());
	  while(flag)
	  {
	  pal=Integer.parseInt(s.toString());
	  pal+=1;
	  s=new StringBuffer(String.valueOf(pal));
	  len2=s.length();
	  if(len2%2==0)
	  {
	  	s1=s.substring(0,len2/2);
	  	s2=s.substring(len2/2,len2);
	  	s2=new StringBuffer(s2).reverse().toString();
	  }
	  else
	  {
	  	s1=s.substring(0,len2/2);
	  	s2=s.substring((len2/2)+1,len2);
	  	s2=new StringBuffer(s2).reverse().toString();
	  	mid=s.substring(len2/2,(len2/2)+1);
	  }
	  if(s1.equals(s2))
	  {
	  	System.out.print(s1+mid+s2);
	  	flag=false;
	  }
	  else
	  {
	  	s=new StringBuffer(s1+mid+new StringBuffer(s2).reverse().toString());
	  }
	  }
	  }
	}
}
/*
Input:
2
808
2133

Output:
818
2222
*/
 
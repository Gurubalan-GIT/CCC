/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Description: https://www.spoj.com/problems/EIGHTS/
 */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		//Very Interesting Logic
  /*1  192 
    2  442 
    3  692 
    4  942 
    
    They are in A.P
    To find the nth term we use
    An=A+(n-1)*d */
   //Dont forget to use BigInteger for large integers
    BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
   long t=Integer.parseInt(bf.readLine());
   BigInteger base=new BigInteger("192");
   BigInteger cd=new BigInteger("250");
   BigInteger sub=new BigInteger("1");
    BigInteger num=null;
      while(t-->0)
      {
      	num=new BigInteger(bf.readLine());
      	System.out.println(base.add(num.subtract(sub).multiply(cd)).longValue());
      }
    }
}

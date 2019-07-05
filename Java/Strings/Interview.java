/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Important Interview Question
 */

import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
		String s;
		String f="0.00";
		  if((s=bf.readLine()).equals(f))
		  System.out.println("wtf");     //produce output
		  
		  if(!(s=bf.readLine()).equals(f))
		  System.out.println("wtf");     //does not produce
		  
		  if((s=bf.readLine())==(f))
		  System.out.println("wtf");      //does not produce
		  
		  if((s=bf.readLine())!=(f))
		  System.out.println("wtf");      //does not produce
		  
	}
}

/*input
  0.00
  */
  
/*  Explanation:
   In general both equals() and “==” operator in Java are used to compare objects to check equality but here are some of the differences between the two:

Main difference between .equals() method and == operator is that one is method and other is operator.
We can use == operators for reference comparison (address comparison) and .equals() method for content comparison. 
In simple words, == checks if both objects point to the same memory location whereas .equals() evaluates to the comparison of values in the objects.
If a class does not override the equals method, then by default it uses equals(Object o) method of the closest parent class that has overridden this method.
*/

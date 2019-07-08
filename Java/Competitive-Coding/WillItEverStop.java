/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Description: https://www.spoj.com/problems/WILLITST/
 */
import java.util.*;
import java.lang.*;
import java.math.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		BigInteger  b=new BigInteger(s.nextLine());
		if((b.longValue()&(b.longValue()-1))==0)
		System.out.println("TAK");
		else
		System.out.println("NIE");
	}
}

/*
Input:
4

Output:
TAK
*/
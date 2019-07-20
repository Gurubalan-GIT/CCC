/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Description: https://www.hackerrank.com/challenges/red-john-is-back/problem
 * prerequisite: C(n, k) = C(n-1,k) + c(n-1, k-1) and C(i, 0) = 1 for all i.
 */
 import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
     
        static int nCr(int n,int r)
        {   
            int c[][]=new int[n+1][r+1];
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=Math.min(i,r);j++)
                {
                    if(j==0||j==i)
                      {
                          c[i][j]=1;
                      }
                      else
                        c[i][j]=c[i-1][j-1]+c[i-1][j];
                }
            }
            return c[n][r];
        }
        static int primes(int n)
        {
           int count=0;boolean flag;
           for(int i=2;i<=n;i++)
           {    
               flag=true;
               for(int j=2;j<=Math.sqrt(i);j++)
                  {
                      if(i%j==0)
                      {   flag=false;
                          break;
                      }
                       
                  }
                  if(flag)
                    count++;
           }
           return count;
        }
        
    // Complete the redJohn function below.
    static int redJohn(int n) {
      
        int numOfSquares=n/4;
        int leftOutbricks;
        int numOfCombinations=0;
        for(int squares=0;squares<=numOfSquares;squares++)
        {  //total no. of combinations or arrangements with 0 squares - obviously zero
           //total no. of combinations or arrangements with 1 squares ... hope u get it
           //Here one brick is one entity like wise one square is one entity
              leftOutbricks=(n-(4*squares));
            numOfCombinations+=nCr(leftOutbricks+squares,squares);

            
        }
           return primes(numOfCombinations);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int result = redJohn(n);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
/*
Sample Input

2
1
7
Sample Output

0
3
*/
 
 
 
 
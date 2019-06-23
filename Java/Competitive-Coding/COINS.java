/**
 * Created Date:  June 22nd 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Problem Description: https://www.spoj.com/problems/COINS/
 * Solving Dynamic programming -1
 */
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
    
        HashMap<Integer,Long> hm=new HashMap<Integer,Long>();
		
        /*HashMap is preferred over array for dp problems*/
		
    public static void main(String args[])throws IOException 
    {
        
     
            Scanner sc = new Scanner(System.in);
        
        Main m = new Main();
        
          while(sc.hasNext())
          {
              
              int n=sc.nextInt();
              
              System.out.println(m.findCoins(n));
          }
    }
      long findCoins(int n)
      {
          
          if(n==0)
             return n;
    
    
           if(hm.containsKey(n)) {
                
                return hm.get(n).longValue();
           }
           
           else {
               
               long res = Math.max(n,findCoins(n/2)+findCoins(n/3)+findCoins(n/4));
               
               hm.put(n,res);
               
               return res;
              
               
           }
           
      
      }
      
     
    
}

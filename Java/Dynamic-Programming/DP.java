/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Series on Dynamic programming
 */

//Fibanocci number using recursion
//Algorithm:
/*  Fib(n)
    if n<=1
       return n
    return Fib(n-2)+Fib(n-1) 

  Same value is calculated number of times incurring cpu cycles and time cost as well as stack resource.
Two ways we can eliminate this:
1.Memoization/TopDown - Look in the data structure(a look up table in the memory ),
if present
  return that value
else
  find and place in the look up table

2nd method will be dealt after some hands on coding
*/
class MemoizFib
{
	private final int NIL = -1;
	private int lookup[];
	public MemoizFib()
	{
		
	}
	/* @param size of array */
	public MemoizFib(int lsize)
	{
		lookup=new int[lsize];
		for(int i=0;i<lsize;i++)
			lookup[i]=NIL;
	}
	/* @return nth Fibonacci number */
  public int fib(int n) 
  { 
    if (lookup[n] == NIL) 
    { 
      if (n <= 1) 
          lookup[n] = n; 
      else
          lookup[n] = fib(n-1) + fib(n-2); 
    } 
    return lookup[n]; 
  } 
	public static void main(String []ccc)
	{
	  MemoizFib mfib=new MemoizFib(100);
      System.out.println("Fibonacci number is" + " " +mfib.fib(40));		  
	}
}
/*ouput: Fibonacci number is 102334155 */

/*How do you find it as dp problem 
 Wait.., does it have over-lapping subproblems ?  YES. 
 Is the optimal solution to a given input depends on the
 optimal solution of its subproblems ? Yes... Bingo ! its DP :)
 ----------------------------------------------------------------
 Two differences between memoization and tabulation is the way look up table is build.
 You have seen that "memoization" buids the table in top down approach well "tabulation" is quite reverse.
 -----------------------------------------------------------------------------------------------------
 
 2.Tabulation/BottomUp
   -solution for sub problems are built in bottom up fashion
*/
/* Java program for Tabulated version */
public class TabFibonacci 
{ 
  public int fib(int n) 
  { 
    int f[] = new int[n+1]; 
    f[0] = 0; 
    f[1] = 1; 
    for (int i = 2; i <= n; i++) 
          f[i] = f[i-1] + f[i-2]; 
    return f[n]; 
  } 
  
  public static void main(String[] args) 
  { 
    Fibonacci f = new Fibonacci(); 
    int n = 9; 
    System.out.println("Fibonacci number is" + " " + f.fib(n)); 
  }
}  
/*Learning till now is a brief about df - Let's get into deeper with amazing problems and explanations.
  Given a list of N coins, their values (V1, V2, … , VN), and the total sum S. 
  Find the minimum number of coins the sum of which is S (we can use as many coins of one type as we want),
  or report that it’s not possible to select coins in such a way that they sum up to S.

Now let’s start constructing a DP solution:

First of all ''''''we need to find a state for which an optimal solution is found'''''' and with the help of which we can
 find the optimal solution for the next state.
 
 -------------------------------------What does a "state" stand for?---------------------------------
 "state" is a solution/quantity for a sub problem, it is uniquely identified by parameters. 
 In this case minimum number of coins which sum up to i, 
 we can easily find the next state – the solution for i+1. ..... that finally leads to S sum.
 -------
 Let's follow Tabulation method(you can take memoizatin - it's your wish)
 Steps to solve a DP
1) Identify if it is a DP problem

   - It has overlapping sub problems as we said above
   - Optimal Substructure: A given problems has Optimal Substructure Property if optimal solution 
     of the given problem can be obtained by using optimal solutions of its subproblems.
	 
2) Decide a state expression with 
   least parameters
      
	- Lets say that n coins are v[j] 0<=j<=n-1. sub-problems sum 1<=i<=S (S is the required sum)   
	- let Min[sum] stores the min. coins for given sum.
	
3) Formulate state relationship    
     let's say the coins we have are 1,2,4
	 
	 for sum 0 - 0 coins -  From this let's consider (Min[0] = 0) as base value. 
	 psum is present sum.
	 for sum 1 - 1 coin(v[0])  Min[1] = 1 (oh! lets take it as Min[i]=i)-- we prove it as wrong
     we can find that coins<=present required sum are to be considered, so we add a condition (v[j]<=i).
	 for sum 2 - take  v[0](1)<=2  so we proceed, next ?
	 we get an idea that Min[(psum)i-v[j]] -> Min[2-1] gives num of 1 coins but Min[1] equals 1 instead of 2,
	 we change it as Min[i] = Min[i-v[j]] + 1
	 we see that only coin 1 is less than or equal to the current sum. Analyzing it, we see that for sum 1-V[0]= 0 
	 we have a solution with 0 coins. Because we add one coin to this solution, we’ll have a solution with 1 coin for sum 1
     Next we get Min[2] = Min[2-2]+1 --->1 coin (i.e; coin 2)
	 
	 Hurrah! you can see that it follows optimal substructure property.
	 
4) Do tabulation (or add memoization)
     Let's look at the code! */
	class Coins
	{ 
	 private int cvalue[];
	  public Coins()
	  {
		  
	  }
	  public Coins(int n)
	  {   //let n = 3
		  cvalue[] = new cvalue[n]; 
		  cvalue[0] = 1;
		  cvalue[1] = 2;
		  cvalue[2] = 4;
	  }
	  /* @return minimum number of coins for a given sum */
	  
	   public int minCoins(int sum)
	   {
		 int Min[] = new int[sum+1]; 
		                               
		 for(int i=1;i<=sum;i++)
			 Min[i] = -1;
		 
		 Min[0] = 0;
		 
		 for(int i=1;i<=sum;i++)
		 {
			for(int j=0;j<cvalue.length;j++)
			{   
		       if(cvalue[j]<=i&&Min[i-cvalue[j]]+1){
				   
				Min[i] = Min[i-cvalue[j]]+1;
				
			    }
                return Min[sum];				
			}				
		 }
	   }
	   public static void main(String []args)
	   {
		   Coins c = new Coins(3);
		   System.out.println("Minimum number of coins for the given sum 4: "+c.minCoins(4));
	   }
	}
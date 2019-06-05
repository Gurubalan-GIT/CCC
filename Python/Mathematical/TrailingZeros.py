#Math behind finding the trailing zeros of factorial of a number

#Usually trailing zeros occur by the multiplication of 2 and 5

#If we observe the factorial of a number, it's indeed (no. of 2's)>=(no. of 5's)

#So how to catch no. of 5's to capture the no. of trailing zeros

#Well, the answer is diving a number by the multiples of 5.

#If you observe that 5's occurs in a factorail of a number>=5,

#similarly 25's occur in a factorial of a number>=25 ...


# Function to return  
# trailing 0s in  
# factorial of n 
def findTrailingZeros(n): 
      
    # Initialize result 
    count = 0
  
    # Keep dividing n by 
    # powers of 5 and 
    # update Count 
    i=5
    while (n/i>=1): 
        count += int(n/i) 
        i *= 5
  
    return int(count) 
  
# Driver program  
n = 100
print("Count of trailing 0s "+
    "in 100! is",findTrailingZeros(n)) #24

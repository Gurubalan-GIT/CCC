a,b=map(int,input().split())
r=0
def gcd1(a,b):
    r=a%b
    while r!=0:
        if a>b:
            a=a%b
            r=a

        else:
            b=b%a
            r=b

#    print(a,b)
    return max(a,b)            
	    









print(gcd1(a,b))    



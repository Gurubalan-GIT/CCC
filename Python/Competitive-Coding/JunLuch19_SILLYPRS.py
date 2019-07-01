#problem link->https://www.codechef.com/LTIME73B/problems/SILLYPRS

#Code:->

t=int(input())

for _ in range(t):
    n=int(input())
    sum1=0
    H=[int(i) for i in input().split()]
    W=[int(i) for i in input().split()]

    a=0
    b=0 
    for i in range(n):
        if H[i]%2==0:
            a+=1
        if W[i]%2==0:
            b+=1

    sum1=int(int((sum(H)+sum(W))/2)-int(abs(a-b)/2))
    print(sum1)    

    

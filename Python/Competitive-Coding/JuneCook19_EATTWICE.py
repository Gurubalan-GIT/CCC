t=int(input())

for _ in range(t):
    n,m=map(int,input().split())
    d=[]
    v=[]
    for i in range(n):
        a,b=map(int,input().split())
        v.append((a,b))

    v=sorted(v, key = lambda x: x[1])
#    print(v)    
            
    sum=v[n-1][1]
    i=n-2
    while i>=0:
        if v[i][0]!=v[n-1][0]:
            sum+=v[i][1]
            break
        i-=1

    print(sum)        

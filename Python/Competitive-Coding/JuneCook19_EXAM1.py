t=int(input())

for _ in range(t):
    n=int(input())
    s=input()
    u=input()
    count=0
    index=0
    i=0
    while i<n:
        if u[i]!='N':
            if s[i]!=u[i]:
                i+=2
            else:
                count+=1
                i+=1
        else:
            i+=1
    print(count)                
    
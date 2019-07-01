#problem link->https://practice.geeksforgeeks.org/problems/edit-distance/0

t=int(input())


def distance(s,s1,n,m):
    if n<0:
            return m+1
    elif m<0:
        return n+1
    elif s[n]==s1[m]:
        return distance(s,s1,n-1,m-1)
    else:
        return min(distance(s,s1,n-1,m)+1,distance(s,s1,n,m-1)+1,distance(s,s1,n-1,m-1)+1) 


for _ in range(t):
    n,m=map(int,input().split())
    s,s1=map(str,input().split())
    print(distance(s,s1,n-1,m-1))               

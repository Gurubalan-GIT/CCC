#problem link->https://leetcode.com/problems/next-permutation/

arr=[int(i) for i in input().split()]

def nextpermutation(arr):
    i=0
    j=0
    f=0
    k=0
    n=len(arr)
    for i in range(n-1):
        if arr[i]<arr[i+1]:
               f+=1
               j=i

#    print(f)
    if (f==0):
        arr.sort()
    else:
        for i in range(j+1,n):
              if arr[j]<arr[i]:
                    k=i
        
        arr[j],arr[k]=arr[k],arr[j]

        arr=list(arr[:j+1])+list(reversed(arr[j+1:]))
    
    print(arr)


nextpermutation(arr)
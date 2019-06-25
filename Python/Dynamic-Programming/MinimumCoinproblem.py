W=int(input())

arr=[int(i) for i in input().split()]


def coin(arr,W,n):
    if W==0:
        return 0
    elif n==0 and W>0:
        return coin(arr,W-arr[n],n)+1 
    elif arr[n]>W:
        return coin(arr,W,n-1)
    else:

        return min(coin(arr,W-arr[n],n)+1,coin(arr,W,n-1))





for i in range(W+1):
    print(i,coin(arr,i,len(arr)-1))
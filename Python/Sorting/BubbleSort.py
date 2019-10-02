"""
Contributed by: Anushree Khanna
Email-ID: anushreek@ieee.org

"""

#Bubble sort compares each element to the next, which leads to the highest element "sinking" to the bottom of the array. It does (n-1) passes over the array, where n is the number of elements in the array.

def BubbleSort(arr):
    n=len(arr)
    for i in range(n):
        flag=-1
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                flag=5
        if flag==-1:
            break
    return arr

"""
Sample Input Case:
Input:
BubbleSort([23,54,0,-9,1])

Output:
[-9, 0, 1, 23, 54]

"""

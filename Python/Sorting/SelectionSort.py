"""
Contributed by: Anushree Khanna
Email-ID: anushreek@ieee.org

"""

#Selection Sort uses the concept of finding the minimum element in the unsorted part of the list and adding it to the end of the already sorted subarray.

def SelectionSort(arr):
    for i in range(len(arr)):
        currentmin=i
        for j in range(i+1,len(arr)):
            if arr[currentmin]>arr[j]:
                currentmin=j
        arr[i],arr[currentmin]=arr[currentmin],arr[i]
    return arr

"""
Sample Input Case:

Input:
SelectionSort([2,45,98,-11,0,3])

Output:
[-11, 0, 2, 3, 45, 98]

"""
        
        

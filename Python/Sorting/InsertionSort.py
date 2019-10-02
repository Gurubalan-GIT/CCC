"""
Contributed by: Anushree Khanna
Email-ID: anushreek@ieee.org

"""

#Insertion sort is one of the easiest sorting algorithms. It involves sorting through the list element by element, and insering the scanned element into the right position in the 'sorted list'. 

def InsertionSort(array):
    for i in range(1,len(array)):
        pos=array[i]
        j=i-1
        while j>=0 and pos<array[j]:
            array[j+1]=array[j]
            j-=1
        array[j+1]=pos
    return array

""""
Sample Input:
Input:
InsertionSort([2,7,44,99,0,-1,5])

Output:
[-1, 0, 2, 5, 7, 44, 99]

"""

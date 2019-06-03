def BinarySearch(List,key):
    n=len(List)
    low=0
    high=n-1
    while low<=high:
        mid=(low+high)/2
        if List[mid]<key:
            low=mid+1
        elif List[mid]>key:
            high=mid-1
        else:
            return mid
    return "No match found"    

print BinarySearch([1,4,6,9],1)        
        
        
        
    

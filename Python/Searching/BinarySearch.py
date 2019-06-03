def BinarySearch(List,key,start,end):
    mid=int((start+end)/2)
    if List[mid]==key:
        return mid
    elif key<List[mid]:
        end=mid-1
    elif key>List[mid]:
        start=start+1

print BinarySearch([1,4,6,9],1,0,3)        
        
        
        
    

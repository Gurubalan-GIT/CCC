def LinearSearch(List,key):
    n=len(List)
    for i in range(0,n):
        if List[i]==key:
            return "Item found at position", i
            break
    print "Sorry, object not found"    
        


print LinearSearch([1,2,3,4],3)

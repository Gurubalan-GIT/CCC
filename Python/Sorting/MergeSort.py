arr=[int(i) for i in input().split()]

def split(arr):
    if(len(arr)<=1):
        return arr
    else:
        mid=int(len(arr)/2)
        a=split(arr[:mid])
        b=split(arr[mid:]) 
    
        return marge(a,b)      


def marge(a,b):
    c=[]
    a.reverse()
    b.reverse()
    while len(a)>0 or len(b)>0:
        if len(a)==0 and len(b)!=0:
            b.reverse()
            c+=b
            break
        elif len(b)==0 and len(a)!=0:
            a.reverse()
            c+=a
            break                  

        elif a[-1]>b[-1]:
            c.append(b[-1])
            b.pop()

        elif a[-1]<=b[-1]:
            c.append(a[-1])
            a.pop()

    return c         

arr=split(arr)

print(arr)
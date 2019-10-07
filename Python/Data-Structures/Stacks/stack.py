"""
Contributed by: Anushree Khanna
Email-ID: anushreek@ieee.org

"""
#Stack is a datatype that implements LIFO (Last In First Out). This means that the elements that enter the stack first will be removed from it last.

def CreateStack():
    stack=[]
    return stack

def push(stack,item):
    stack.append(item)
    print(item, " pushed to stack")

def pop(stack):
    if (len(stack)==0):
        return -1
    else:
        return stack.pop()
    
def show(stack):
    if (len(stack)==0):
        print("Empty stack")
    else:
        return stack

"""
Sample Input:
Input:
stack=CreateStack()
push(stack,5)
push(stack,12)
push(stack,3)
print(pop(stack))

Output:
5 pushed to stack
12 pushed to stack
3 pushed to stack
3

"""
    

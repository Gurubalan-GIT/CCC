#problem link https://leetcode.com/problems/set-matrix-zeroes/submissions/


n=int(input())

arr=[]

for i in range(n):
    b=[int(j) for j in input().split()]
    arr.append(b)

def setZeroes(A):
    for i in range(len(A)):
        for j in range(len(A[i])):
            if A[i][j]==0:
                A[i][j]='b'
                if A[0][j]!='b':
                    A[0][j]='c'
                A[i][j]='b'

#    print(A)            
    
    for i in range(len(A)):
        for j in range(len(A[i])):
            if ((A[0][j]=='c' or A[0][j]=='b') and A[i][j]!='b' and i>0):
                A[i][j]='r'    

    for i in range(len(A)):
        f=0
        if 'b' in A[i]:
            f+=1
        for j in range(len(A[i])):
            if f==1 and A[i][j]!='b':
                A[i][j]=0    

    for i in range(len(A)):
        for j in range(len(A[i])):
            if ((A[i][j]=='c' or A[i][j]=='b' or A[i][j]=='r')):
                A[i][j]=0    

return A   
                    
print(setZeroes(arr))
"""
Problem Statement
The door of Snuke's laboratory is locked with a security code.

The security code is a 4 -digit number. We say the security code is hard to enter when it contains two consecutive digits that are the same.

You are given the current security code S. If S is hard to enter, print Bad; otherwise, print Good.
"""
"""
Sample Input 1 : 3776
Sample Output : Bad

"""
#Code

s=input()

f=0
for i in range(len(s)-1):
    if s[i]==s[i+1]:
        f+=1
        break

if f==0:
    print("Good")

else:
    print('Bad')            
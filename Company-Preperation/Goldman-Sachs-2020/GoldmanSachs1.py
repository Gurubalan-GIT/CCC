'''
* Creation Date: Wednesday, 2nd October 2019
* Author: Anushree Khanna
* Email: anushreek@hotmail.com
* Company: Goldman Sachs
* Season: Hiring for 2020 interns
'''

#My test consisted of 3 coding questions(2 easy, 1 slightly difficult), 10 multichoice math+code-related questions, and 2 essays.

#Here is one of the easy coding questions:

#The question was to print the first non-repeating character in a given testcase

t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    flag=0
    for i in s:
        if s.count(i)==1:
            print(i)
            flag=1
            break
    if flag==0:
        print(-1)
       
'''Sample Input Case:
3
5
hiiii
9
asjdlkjap
3
aaa

Output:
h
s
-1
'''
    

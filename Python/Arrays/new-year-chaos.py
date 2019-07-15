#Hackerrank question
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    n=len(q)
    number = [0] * n
    x = True
    while x:
        x = False
        for i in range(n):
            while i < n - 1 and q[i] > q[i + 1]:
                number[q[i] - 1] += 1
                q[i], q[i + 1] = q[i + 1], q[i]
                x = True
                i += 1
    s = 0
    for j in number:
        s += j
        if j>2:
            print('Too chaotic')
            break
    else:
        print(s)
if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)

# Hackerrank Link: https://www.hackerrank.com/challenges/find-a-string/problem
#To find the number of occurences of a substring in a string
#Solution:
def count_substring(string, sub_string):
    count=0
    #print(len(string),len(sub_string))
    for i in range(0, len(string)-len(sub_string)+1):
        if string[i] == sub_string[0]:
            flag=1
            for j in range (0, len(sub_string)):
                if string[i+j] != sub_string[j]:
                    flag=0
                    break
            if flag==1:
                count += 1
    return count

string = input().strip()
sub_string = input().strip()
count = count_substring(string, sub_string)
print(count)

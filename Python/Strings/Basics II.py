#String Basics II

#This unit covers the basic inbuilt string functions in Python 3.


#To find length of a given string:

a="this is a string"
print(len(a)) #will give 16 as output


#To find first occurence of a character in a string:

print(a.index("s")) #will give output 3

#If the character does not exist in string, it will print an error stating substring not found.
print(a.index("x") #will give an error.
      

#To count occurences of a character in a string:
print(a.count("i")) #will print 3 as there are 3 occurences of i in the string a.

      
#Slicing of strings:
#In general, the format followed is :
#      stringname[start:stop:step]

print(a[2]) #Here, only one argument is passed. A single character present at the index provided will be the output.
>> 'i'
      
print(a[:5]) #The substring beginning at index 0 upto index 4(length of substring=5) will be printed.
>> 'this '

print(a[3:]) #Substring starting at index 3 till the end will be printed.
>> 's is a string'
      
print(a[3:9:2]) #Will output characters starting from index 3 till 8 skipping one alternatively.
>> 'si '

print(a[::-1]) #This is used to reverse the string, like strrev in C
>> 'gnirts a si siht'


#To check if a string is uppercase:
print(a.isupper()) #Returns False as our string is not completely uppercase.

#To check if a string is lowercase:
print(a.islower()) #Returns True as our entire string is lowercase.
      
#To convert a string to uppercase:
upr=a.upper() #Will create a new string called upr which contains 'THIS IS A STRING'

#To convert a string to lowercase:
lwr=a.lower() #Will create a new string called lwr having 'this is a string'

#Checking if a string begins or ends with a substring:
print(a.startswith("this")) #Returns True
print(a.endswith("abc")) #Returns False

      
#Splitting a string:
print(a.split()) #The default argument in split is whitespace, which means the a will now contain a list of all the words in the string separated by whitespaces.
#Output will be ['this', 'is', 'a', 'string']

print(c.split("s")
# ['thi', ' i', ' a ', 'tring']
"""There is loss in a string split."""

#Partitions:
print(b.partition()) #Partition parts the string at the first occurence of the given character.
#Output is ('THIS', ' ', 'IS A STRING')
      
      

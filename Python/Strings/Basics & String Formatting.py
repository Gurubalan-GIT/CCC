
#Strings in Python can be created using single quotes '' and double quotes ""

str1='hello'
str2="hi"


#The only difference is that you can use apostrophes in doubly quoted strings, whereas it would terminate the string in case of single quotes.

str2="there's"


#Simultaneous assignment is possible in Python. You can assign n values to n variables at once, with the values and variables separated by commas.

a,b,c="a","b","c"


#The + and * operators can be used on strings as well. + Performs concatenation of strings and * repeats the string given number of times.

a=a+b
print(a) #Output will be ab

c=c*3
print(c) #Output will be ccc


#String Formatting

name="John"
age=20
print("%s is %d years old"(name,age)) #"John is 20 years old"

"""%s - String (or any object with a string representation, like numbers)

%d - Integers

%f - Floating point numbers

%.<number of digits>f - Floating point numbers with a fixed amount of digits to the right of the dot.

%x/%X - Integers in hex representation (lowercase/uppercase)
"""

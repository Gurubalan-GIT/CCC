/*
 * Created Date: Saturday June 11th 2019
 * Author: Rajeshwari Kalyani
 * Email-ID: klhn.rajeshwari@gmail.com
 * -----
 * Copyright (c) 2019 Rajeshwari Kalyani
 */


/* Description: Given a column title as appears in an Excel Spreadsheet, return its corresponding column number.
For Example :

    A -> 1
    B -> 2
    ....
    ....
    Z -> 26
    AA -> 27

Input Format

One string denoting the column title of an excel spreadsheet.

Constraints

The answer will always fit in a 32-bit integer.

Output Format

Output an integer.

Sample Input 0

AA

Sample Output 0

27

*/



#include <bits/stdc++.h> 
  
using namespace std;  
int titleToNumber(string s) 
{ 

    int result = 0; 
    for (const auto& c : s) 
    { 
        result *= 26; 
        result += c  - 'A' + 1; 
    } 
  
    return result; 
} 
int main() 
{ 
    char a[100];
    cin>>a;
    cout << titleToNumber(a); 
    return 0; 
}


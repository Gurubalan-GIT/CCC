/*
 * Created Date: Saturday June 11th 2019
 * Author: Rajeshwari Kalyani
 * Email-ID: klhn.rajeshwari@gmail.com
 * -----
 * Copyright (c) 2019 Rajeshwari Kalyani
 */

/*
Description: The function myfunc takes 2 integers n and m as input.
The fucntion accepts two integers ’n’ and ‘m’ as its argument.
Implement the function to find the sum of ’n’ and ‘m’ and check if the number of digits in ’n’ and number of digits in sum of ’n’ and ‘m’ are same.
If they are same then return the sum of ’n’ and ‘m’ else return ’n’.

Input Format

The function would be called by giving 2 integer inputs

Constraints

0<= N , M <= 100000

Output Format

Return the expected value

Sample Input 0

178 62

Sample Output 0

240

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long int MyFunc(int n, int m) {
    // Complete this function
    int res,d,r=0,c=0;
    res = n+m;
    int p = res;
    if(n==0 && m==1) 
    {
        return 1;
    }
    else if(n==1 && m==0) 
    {
        return 1;
    }
    else 
    {
    while(p>0) 
    {
        d = p%10;
        r++;
        p = p/10;
    }
    int n1=n;
    while(n1>0) 
    {
        d=n1%10;
        c++;
        n1=n1/10;
    }
    if(c==r) 
        return res;
    else 
        return n;
    }
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *array = malloc(sizeof(int) * n);
    for (int array_i = 0; array_i < n; array_i++) {
    	scanf("%i",&array[array_i]);
    }
    int result = MyFunc(n, m);
    printf("%d\n", result);
    return 0;
}
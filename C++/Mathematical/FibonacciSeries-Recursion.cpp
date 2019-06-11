/*
 * Created Date: Saturday June 11th 2019
 * Author: Rajeshwari Kalyani
 * Email-ID: klhn.rajeshwari@gmail.com
 * -----
 * Copyright (c) 2019 Rajeshwari Kalyani
 */

/*
Description: Self explanatory
*/

#include <iostream>

using namespace std;

long int fib(int x)
{
    if(x==1)
        return 1;
    else if(x==0)
        return 0;
    else return fib(x-1)+fib(x-2);
}

int main() {
    int n;
    cin>>n;
    long int ans = fib(n);
    cout<<ans;
    return 0;
}
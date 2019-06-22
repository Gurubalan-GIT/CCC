/*
Problem Statement:-
You are given four integers A, B, C, and D. Find the number of integers between A and B (inclusive) 
that can be evenly divided by neither C nor D.

*/
//Solution

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define mp make_pair
#define ll long long int

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;



ll FindLCM(ll a, ll b) 
{ 
    return (a * b) / __gcd(a, b); 
} 
  
ll rangeDivisor(ll m, ll n, ll a, ll b) 
{ 
    ll lcm = FindLCM(b, a); 
  
    ll a_divisor = n / a - (m - 1) / a; 
    ll b_divisor = n / b - (m - 1) / b; 
  
    ll common_divisor = n / lcm - (m - 1) / lcm; 

  
    ll ans = a_divisor + b_divisor - common_divisor; 
    ll total=(n+1-m)-ans;   
    return total; 
}

int main(){
    ios_base::sync_with_stdio(false);
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<rangeDivisor(a,b,c,d);
     
}
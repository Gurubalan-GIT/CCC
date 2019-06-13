//Euler Totient function use for count number of coprime between in range(1,n-1) with n 

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x:x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define p push
#define em emplace_back
#define mt make_tuple
#define degub(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


int main(){
    ios_base::sync_with_stdio(false);
// Take input number
    int n;
    cin>>n;

// Initial take result equal n
    int result=n;

    for(int p=2;p*p<=n;p++){
        if(n%p==0)
           // Remove number of element which was divided n from result    
            while(n%p==0){
                n/=p;
            }
            // take new result after remove all element which was divided n
            result-=result/float(p);
    }

//Check if n is greather than then again divide result by n then remove from result 
    if(n>1){
        result-=result/float(n);
    }

    cout<<result<<endl;
}



/*
input
8

output
4

Explanation
{1,3,5,7} is coprime with 8

//Coprime-> number a and b is coprime if gcd(a,b)=1

*/
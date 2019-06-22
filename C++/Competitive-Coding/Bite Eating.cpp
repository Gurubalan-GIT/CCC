//problem link->https://atcoder.jp/contests/abc131/tasks/abc131_b

//Solution:

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




int main(){
    ios_base::sync_with_stdio(false);
    ll n,l;
    cin>>n>>l;
    vi v(n+1),cost(n+1);

    ll sum=0;
    for(auto i=1;i<=n;i++){
        cost[i]=l+i-1;
        sum+=cost[i];
    }

    ll minn=1e9;    
    for(auto i=1;i<=n;i++){
        minn=min(minn,abs(sum-(sum-cost[i])));
    }
    
//    cout<<minn<<" "<<sum<<endl;
    if ((sum<0 and minn>0 )or (minn<0 and sum>0)){
        sum=-abs(abs(sum)-abs(minn));
        cout<<sum<<endl;
    }
    else{
        cout<<sum-minn<<endl;
    }
    
}
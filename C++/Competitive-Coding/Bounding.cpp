//problem link->    https://atcoder.jp/contests/abc130/tasks/abc130_b


//Code:->

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define isro ios_base::sync_with_stdio(false);
#define find(v,x) find(all(v),x)!=v.end()


using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int main(){
    isro;
    ll n,x;
    cin>>n>>x;

    vi d(n+2,0);
    vi l(n+2,0);

    for(int i=1;i<=n;i++){
        cin>>l[i];
    }
 
    ll count=0;
    for(ll i=2;i<=n+1;i++){
        d[i]=d[i-1]+l[i-1];
//        cout<<d[i]<<" ";
        if(d[i]<=x)
            count++;
    }

    if (d[1]<=x)
         count++;
    
    cout<<count<<endl;
          

}

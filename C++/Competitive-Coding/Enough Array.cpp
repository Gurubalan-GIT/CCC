//Problem link->https://atcoder.jp/contests/abc130/tasks/abc130_d

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

    ll n,k;
    cin>>n>>k;

    vi v(n);

    for(ll i=0;i<n;i++)   cin>>v[i];
    
    ll ans=0,j=0,sum=0;
    for(ll i=0;i<n;i++){

        while(sum<k and j<n){
            sum+=v[j];
            j++;
        }
        if(sum<k)  break;

        ans+=n+1-j; 
        sum-=v[i]; 
    }

      cout<<ans<<endl;

}
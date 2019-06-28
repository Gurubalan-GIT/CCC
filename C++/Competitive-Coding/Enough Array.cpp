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

    vi v(n+1,0);
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    
    sum=v[n];
    ll sum1=0;
    for(ll i=1;i<=n;i++){
        ll t=v[i];
        v[i]=sum-sum1;
        sum1=+t;
    }

     ll count=0;
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
        if(v[i]>=k){
            count++;
        }
    }
     
//     cout<<count<<endl;

}

/*
    ll count=0;
    for(ll i=0;i<=n;i++){
        ll sum=0;
        for(ll j=i+1;j<=n;j++){
            if(v[j]-v[i]>=k){
                count++;
            }
        }
    }
*/

/*
    ll X,A;
    cin>>X>>A;
    if(X<A){
        cout<<0<<endl;
    }
    else{
        cout<<10<<endl;
    }

*/
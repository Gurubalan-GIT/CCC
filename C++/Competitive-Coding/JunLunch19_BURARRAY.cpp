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
#define str(a) std::to_string(a)
#define integer(a) std::stoi(a)

ll mod=1e9+7;


using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int main(){
    isro;
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;

        vi v(n+1,0);
        for(ll i=1;i<=n;i++){
            v[i]=i;
        }
        ll s=0;
        while(q--){
            ll t1;
            cin>>t1;
            if(t1==1){
              ll y,x;
              cin>>y;
              x=y+s;
              if(x>=1){
                v[x]=0;
              }
            }
            else{
                ll p,q,l,r;
                cin>>p>>q;
                l=p+s;
                r=q+s;
                ll maxx=0; 
                for(ll i=r;i<=r;i++){
//                    cout<<v[i]<<" ";
                    maxx=max(maxx,v[i]);
                }
//                cout<<endl;
                s+=maxx;
                s%=n;
                cout<<maxx<<endl;
            }
        }        
        }
}
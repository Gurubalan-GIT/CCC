//problem link->https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/

//video explain-https://www.youtube.com/watch?v=3hcaVyX00_4

//code

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define isro ios_base::sync_with_stdio(false);
#define debug(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()
using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int MAXN=100;
int MAXW=100;
ll n,k1;


int main(){
    ll t;
    cin>>t;
    
    while(t--){
        cin>>k1>>n;
        
        vii v(k1+1,vi(n+1,0));

        for(auto i=1;i<=n;i++){
            v[1][i]=i;
        }
        for(auto i=1;i<=n;i++){
            for(auto k=2;k<=k1;k++){
                ll total=1e9;
                for(auto j=1;j<=i;j++){
                total=min(total,1+max(v[k-1][j-1],v[k][i-j]));
                }
                    v[k][i]=total;

        }
    }  
        cout<<v[k1][n]<<endl;    


    }
}

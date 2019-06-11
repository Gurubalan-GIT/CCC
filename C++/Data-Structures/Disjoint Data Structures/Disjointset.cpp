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


ll maxx=1e8;

vi v(maxx),size(maxx,1);


int root(ll i){

    while(i!=v[i]){
        i=v[i];
    }
    return i;
}

void Union(ll a,ll b){
// Find root node of each element 
    ll root_a=root(a);
    ll root_b=root(b);


// Check if both element root not equal if not then change Union both root node 
    if(root_a!=root_b){

        if(size[root_b]<size[root_a]){
                v[root_b]=v[root_a];
                size[root_a]+=size[root_b];
        }
        else{
            v[root_a]=v[root_b];
            size[root_b]+=size[root_a];
        }
    }
}

int  main(){
    ios_base::sync_with_stdio(false);
    ll n,e;
    cin>>n>>e;

// initialization each node as seperate set.
    for(ll i=0;i<n;i++){
        v[i]=i;
    }


// Union two different set
    while(e--){
        ll a,b;
        cin>>a>>b;
        Union(a,b);
    }

   for(ll i=0;i<n;i++){
       cout<<v[i]<<" ";
   }
}
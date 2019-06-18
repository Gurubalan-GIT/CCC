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
    ll n,e;
//Take input number of node and number of edge.
    cin>>n>>e;

    vii v(n+1);
    vi visited(n+1,1);

//Create Graph. 
    for(ll i=0;i<e;i++){
        ll v1,u1;
        cin>>u1>>v1;
        v[u1].pb(v1);
    }

    stack<ll>s;

// initial push 1 node in stack.
    s.push(1);

//node 1 visited so it's initialized with false or 0.
    visited[1]=0;  

    while(!s.empty()){

//pop top value of stack.
        ll t=s.top();
        s.pop();
        cout<<t<<endl;
//push all node in stack which was not visited and connected with t(top node)node of stack.

        for(ll i=0;i<v[t].size();i++){
//check node is visited or not
             if(visited[v[t][i]]){
                 s.push(v[t][i]);
                 visited[v[t][i]]=0;
             }
         }
     }

}
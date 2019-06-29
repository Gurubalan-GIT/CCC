//Problem link->https://www.codechef.com/LTIME73B/problems/PAJAPONG

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
        ll x,y,k;
        cin>>x>>y>>k;
        ll a;
        a=(x+y)/k;
        if(a%2==0){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Paja"<<endl;
        }

    }
}
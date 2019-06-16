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

ll f=1e9+7;
vi v(1e9+7);
vi arr(1e9+7);

int segmenttree(ll n,ll low,ll high){
// when low index are equal to high index then return current index value    
    if(low==high){
             arr[n]=v[low];
             return arr[n];
    }
    else if(low>high){
        return 0;
    }
    else{
// Find mid value 
        ll mid=(low+high)/2;
       return arr[n]=segmenttree(2*n,low,mid)+segmenttree(2*n+1,mid+1,high);
    }
}


int range_query(ll n, ll low,ll high,ll l,ll r){
    if(l<=low and r>=high){
        return arr[n];
    }
    else if(high<l or low>r){
        return 100000;
    }
    else{
        ll mid=(low+high)/2;
        return min(range_query(2*n,low,mid,l,r),range_query(2*n+1,mid+1,high,l,r));
    }

} 


int main(){
    ios_base::sync_with_stdio(false);
// Take number of element in tree and number of query
    int n,t;
    cin>>n>>t;

// Create segment tree 
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }


//number of query
    while(t--){
        int l,r;
        cin>>a>>l>>r;
        cout<<range_query(1,1,n,l,r)<<endl;
    }

}



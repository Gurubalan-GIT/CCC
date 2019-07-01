//Problem link->https://www.codechef.com/COOK107B/problems/SLUSH


//Solution

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


int main(){
    isro;
    ll t;
    cin>>t;
    while(t--){
     ll n,m;
     cin>>n>>m;
     vi c(m+1),d(n),f(n),b(n);
     for(auto i=1;i<=m;i++){
         cin>>c[i];
     }   
     for(auto i=0;i<n;i++){
           cin>>d[i]>>f[i]>>b[i];  
      }

    ll sum=0,left=0;  
    vi arr(n);
    for(auto i=0;i<n;i++){
       if(c[d[i]]>0){
           sum+=f[i];
           arr[i]=d[i];
           c[d[i]]--;
       }
       else{
           arr[i]=0;
           sum+=b[i];
       }
    }

    for(auto i=0;i<n;i++){
//        cout<<arr[i]<<" ";
        if(!arr[i]){
            for(auto j=1;j<n;j++){
                if(c[j]>0){
                    arr[i]=j;
                    c[j]--;
                    break;
                }

            }

        }
        
    }
    cout<<sum<<endl;
    for(auto i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

}

/*
        for(auto j=1;j<=m;j++){
                if(c[j]>0){
                arr.pb(j);
                c[j]--;
                break;
            }
        }

*/

/*
           for(auto j=0;j<l.size();j++){
               if(l[j]>f[i] ){
                   f1+=1;
                   sum+=l[j];
                   //cout<<l[i]<<" ";
                   l[j]=f[i];
                   break;
               }
           }
           if(f1==0){

*/
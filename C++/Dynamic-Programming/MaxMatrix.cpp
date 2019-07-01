//Problem:->Maximum Sum Rectangular Submatrix in Matrix

//Explain problem:-https://www.youtube.com/watch?v=yCQN096CwWM&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=15


//Code:

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define isro ios_base::sync_with_stdio(false);
using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


int main(){
    isro; 

    ll n,m;
    cin>>n>>m;

    vii v(n+1,vi(m+1,0));

    for(auto i=1;i<=n;i++){
        for(auto j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }

    ll maxx=0,maxleft=0,maxright=0,maxup=0,maxdown=0;
    for(auto l=1;l<=m;l++){
        vi v1(n+1,0);

        for(auto r=l;r<=m;r++){

            ll currentmax=0;
            ll prev=v1[0];
            ll f=0,start=0,end=0;
            for(auto p=1;p<=n;p++){
                 v1[p]=v1[p]+v[p][r];
                  prev=max(v1[p],prev+v1[p]); 
                  currentmax=max(currentmax,prev);

                  if(v1[p]>0  and f==0){
                      start=p;
                      f+=1;
                  }

                  if(v1[p]>0){
                      end=p;
                  }
            }
            
            if(currentmax>maxx){
                maxx=currentmax;

                maxleft=l;
                maxright=r;
                maxup=start;
                maxdown=end;
            }
            
        }
    }

     cout<<maxx<<endl;

}
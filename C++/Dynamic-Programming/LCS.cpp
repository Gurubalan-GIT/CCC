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

int MAXN=100;
int MAXW=100;


int main(){
    isro; 
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        vii v(s1.length()+1,vi(s2.length()+1,0));

        ll maxx=-1e9; 
        for(int i=1;i<=s1.length();i++){
            for(int j=1;j<=s2.length();j++){
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
                    if(s1[i-1]==s2[j-1]){
                        v[i][j]=max(v[i][j],v[i-1][j-1]+1);
//                        maxx=max(maxx,v[i][j]);
                    }
            }

        }


        for(int i=0;i<=s1.length();i++){
            for(int j=0;j<=s2.length();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
            
    }
}
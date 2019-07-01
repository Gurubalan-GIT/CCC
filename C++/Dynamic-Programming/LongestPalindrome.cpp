//problem link ->https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0


//Solutioni:-

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

    ll t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      ll n=s.length();
      vii v(n+1,vi(n+1,0));

      for(int i=0;i<n;i++){
          v[i][i]=1;
      }

      ll maxx=1; 
      ll start=0,end=0;
      for(int i=0;i<n-1;i++){
          if(s[i]==s[i+1]){
                
                if(i+2-i>maxx){
                    maxx=2;               
                    start=i;
                    end=i+1;
                }
                v[i][i+1]=1;

          }
      }

      ll i=2;
      while(i<n){
          ll k=i;
          for(ll j=0;k<n;j++){
                    if(s[j]==s[k] and v[j+1][k-1]){
                        v[j][k]=1;
                        if ((k+1-j)>maxx){
                            start=j;
                            end=k;
                            maxx=(k+1-j);
                        }
                    }

                   k+=1;
         }
         i+=1;
      }

       for(ll i=start;i<=end;i++){
           cout<<s[i]<<"";
       }
       cout<<endl;
    
    
    }
}


/*

Example:
Input:
2
aaaabbaa
abababab


Output:
aabbaa
abababa


*/
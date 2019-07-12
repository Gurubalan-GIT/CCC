//Problem link->https://www.geeksforgeeks.org/count-pairs-array-whose-sum-divisible-4/
//Approach Hashing 

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(i,n)  for(int i=0;i<n;i++)
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define find(x,v)  find(all(v),c)!=v.end()

using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;


int Solution(vector<int> &A, int B) {
    vector<int>m(B);
    int count=0;
    for(int i=0;i<A.size();i++){
        m[A[i]%B]+=1;
    }
    
    for(int i=0;i<=B/2;i++){
        if (m[i]>0){
            cout<<i<<" "<<m[i]<<endl;
        if((i)==(B-i) or i==0){
            count+=fact(m[i])/(fact(m[i]-2)*fact(2));
        }
        else{
            count+=m[i]*m[B-i];
        }
        cout<<count<<endl;
            
        }
    }
    
    return count;
}


int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<Solution(v,k);
}
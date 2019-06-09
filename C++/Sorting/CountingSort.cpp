#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp makle_pair
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;

int max=1e9,count=0;
vi v1(max,0);
int main(){

// Take size of
    int n;
    cin>>n;
    int  max1=0;

// Take element 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

// increment  value in particular position       
        v1[a]++;
        max1=max(v[i],max1);
    }


    for(int i=0;i<=max1;i++){
        while(v1[i]--){
            cout<<i<<" ";
        }
    }

  

}


//    vi v1(max1+1,0);

/*    
    for(auto i:v){
    //    cout<<i<<" ";
        v1[i]++;
    }
    //cout<<"\n";
  */

    //cout<<"\n";

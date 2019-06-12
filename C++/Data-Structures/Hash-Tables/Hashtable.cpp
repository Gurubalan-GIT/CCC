#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define pb push_back
#define em emplace_back
#define mt make_tuple
#define mp make_pair
#define ll long long int
#define debug(c) cout<<c<<endl;
#define find(v,x)  find(all(v),x)!=v.end()

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int main(){
    ios_base::sync_with_stdio(false);

// Take number of student details
    int n;
    cin>>n;
    map<string,pair<string,int>>m;


// Create a map and assing key as student "Rollno" and value as pair of Student Name and Year 

    for(ll i=0;i<n;i++){
        string Rollno,name;
        ll year;
        cin>>Rollno>>name>>year;
        m[Rollno]=mp(name,year);
    }
    
//Check Student Details using Rollno

    ll t;
    cin>>t;
    while(t--){
        string Rollno;
        cin>>Rollno;
        cout<<m[Rollno].first<<" "<<m[Rollno].second<<endl;
    }

}


/*
input:-
3
16EGICS018 Bharat 4
16EGICS004 Aditya 4
16EGICS002 Abhi 4
2
16EGICS018
16EGICS002

output:-
Bharat 4
Abhi 4

*/


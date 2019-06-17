#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp make_pair

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

using namespace std;

const int N = 1e5 + 100;

int n, k, nxt = 1;
vii Node(N,vi(27,-1));
vii Node_value(N,vi(27,-1));
bool win[N], los[N];

void build(string s,int num){
    int i=0,v=0;

    for(int i=0;i<s.size();i++){
        int t=s[i]-'a';
        if(Node[v][t]==-1){
            Node[v][t]=nxt;
            Node_value[v][t]=num;
            v=nxt;
            nxt++;
        }
        else{
            if(Node_value[v][t]<num){
                Node_value[v][t]=num;
            }
            v=Node[v][t];
        }

    }
}

void search(string s){
    int count=0;
    int v=0,t=s[count]-'a';
    int value=-1;

    while(Node[v][t]!=-1 and count<s.size()){
        value=Node_value[v][t];
        v=Node[v][t];
        if(count+1<s.size())
            t=s[count+1]-'a';
        count++;
    }

    if(count>=s.size())
        cout<<value<<endl;

    else
        cout<<-1<<endl;

}

int main()
{ 
    ios_base::sync_with_stdio(false);
    int n,t;
    cin>>n>>t;
    while(n--){
        string s;
        int num;
        cin>>s>>num;   
        build(s,num);
    }
    while(t--){
        string s;
        cin>>s;
        search(s);
    }

    return 0;
}


// For more details follow link https://codeforces.com/blog/entry/50357
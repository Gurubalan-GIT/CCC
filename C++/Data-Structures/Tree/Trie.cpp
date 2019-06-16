#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mt make_tuple
#define mp make_pair
#define debug(c) cout<<c<<endl;
#define find(v,x)  find(all(v),x)!=v.end()


using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;
typedef map<char,ll>mi;

//Each Node contain 28 children (A-Z) 
struct Trie{
    Trie *children[27];
    char ch;
    bool endofword;
};

//Create Node and initial assign Null to all children of the node
Trie* Node(){
    Trie* node=new Trie();
    for(int i=0;i<27;i++){
        node->children[i]=NULL;
    }
    node->endofword=false;
    return node;
}

void insert(Trie *root,string s){
    Trie* node=new Trie();
    node=root;

    for(int i=0;i<s.size();i++){
        int index=s[i]-'a';

//Check if children of a node are Null then create new Node and assign to respective children 
        if(!node->children[index]){
            node->children[index]=Node();
            node->children[index]->ch=s[i];
        }
        node->endofword=true;

//Now respective children become a new Node
        node=node->children[index];
    }
}

void search(Trie *root,string s1){
    Trie *node=new Trie();
    node=root;
    int count=0;
    
    for(int i=0;i<s1.size();i++){
        int index=s1[i]-'a';
        if(node->children[index]!=NULL){
            node=node->children[index];
            count=i;
        }
        else{
            break;
        }
    }

    if(count+1>=s1.size() and !node->endofword){
        cout<<"string find"<<endl;
    } 
    else{
        cout<<"string not find"<<" "<<count+1<<endl;
    }
}
int main(){
    Trie* root=Node();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

// Insert String in Trie
        insert(root,s);

    }
    cin>>t;
    while(t--){
        string str;
        cin>>str;
//Search string in Trie
        search(root,str);
    }
}



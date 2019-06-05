#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<tuple>
#include<stack>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
using namespace std;
typedef vector<int>vi;  
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef vector<pi>pii;

struct node{
    int num;
    node *left,*right;
}*root=NULL;

node* creation(struct node *root,int num){
    if(root==NULL){
        root=new node;
        root->num=num;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        if(num<root->num)
            root->left=creation(root->left,num);
        else
            root->right=creation(root->right,num);
    }

 return root;

}

void preorder(struct node *root){
    if(root!=NULL){
        cout<<root->num<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
// take size of element in tree
   int n;
   cin>>n;
//create binary tree    
   tr(i,1,n){
       int num;string s;
       cin>>num;
       root=creation(root,num);
   }
    
//preorder traversal
        preorder(root); 
}


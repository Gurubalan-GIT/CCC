// similar problem https://leetcode.com/problems/binary-tree-right-side-view/

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
#define isro ios_base::sync_with_stdio(false);

using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;

//Structure of Node

struct TreeNode{
        int val;
        TreeNode *left,*right;
}*root=NULL;


//Create Node 
TreeNode* CreatTree(TreeNode* root,int val){
    if(root==NULL){
          root=new TreeNode();
          root->val=val;
          root->left=NULL;
          root->right=NULL;
    }
   return root; 
}


void leftSideView(TreeNode* root) {
        if(root==NULL)
        {
            queue<TreeNode*> q;
            q.push(root);
            vector<int> v;
            
            while(q.size()!=NULL)
            {
                int count=q.size();
                for(int i=1;i<=count;i++)
                {     
                    TreeNode* t=q.front();
                    q.pop();
                    if(i==0 and t->val!=-1)
                        v.push_back(t->val);
                    if(t->left!=NULL)
                        q.push(curr->left);
                    if(t->right!=NULL)
                        q.push(curr->right);
                    
                }
            }
            
            for(auto i:v){
                cout<<i<<" ";
            }
        }
}      

int main(){
    isro;
    root=CreatTree(root,9);

    root->left=CreatTree(root->left,6);
    root->right=CreatTree(root->right,17);

    root->left->left=CreatTree(root->left->left,23);
    root->left->right=CreatTree(root->left->right,7);

    root->right->left=CreatTree(root->right->left,-1);
    root->right->right=CreatTree(root->right->right,-1);

    root->left->left->left=CreatTree(root->left->left->left,-1);
    root->left->left->right=CreatTree(root->left->left->right,-1);
    root->left->right->left=CreatTree(root->left->right->left,-1);
    root->left->right->right=CreatTree(root->left->right->right,-1);

    leftSideView(root);
    
}        
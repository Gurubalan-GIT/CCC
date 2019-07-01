void inorder(TreeNode* root)
{
    TreeNode* curr = root;
    while(curr)
    {
        if(curr->left == NULL)//matlab left main koi nahi hai toh khud ko hi visit kr lo
        {
            cout<<curr->val<<" ";
            curr = curr->right;
        }
        else
        {
            TreeNode* node = curr->left; //inorder predecessor
            while(node->right && node->right != curr)
                node = node->right;
            if(node->right == curr) //matlab kya inorder predecessor visit ho gya hai
            {
                // haan, ho gya hai
                cout<<curr->val<<" ";
                node->right = NULL;
                curr = curr->right; 
                
            }
            else
            {
                node->right = curr; // mark kr do node ko ki waapis yahin aana hai ghoom k
                curr = curr->left;
            }
        }
    }
}
void preorder(TreeNode* root)
{
    TreeNode* curr = root;
    while(curr)
    {
        if(curr->left == NULL)
        {
            cout<<curr->val<<" ";
            curr = curr->right;
        }
        else
        {
            TreeNode* node = curr->left;
            while(node->right && node->right != curr)
                node = node->right;
            if(node->right == curr) // matlab ghoom lia
            {
                node->right = NULL;
                curr = curr->right;
            }
            else
            {
                cout<<curr->val<<" ";
                node->right = curr;
                curr = curr->left;
                
            }
        }
    }
}
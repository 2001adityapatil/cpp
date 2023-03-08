void preorder(Node *root, vector<vector<int>> &ans, vector<int> &ds)
{
    if(root == NULL)
    return;
    
    ds.push_back(root->data);
    
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(ds);
    }
    
    
    preorder(root->left, ans, ds);
    preorder(root->right, ans, ds);
    ds.pop_back();
    
}
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> ans;
    vector<int> ds;
    preorder(root, ans, ds);
    return ans;
}

// Function to return the ceil of given number in BST.
// void inorder(Node *root, vector<int> &v)
// {
//     if(root == NULL)
//     return;
    
//     v.push_back(root->data);
//     inorder(root->left, v);
//     inorder(root->right, v);
// }
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    
    // vector<int> v;
    // inorder(root, v);
    // sort(v.begin(), v.end());
    // int ans = lower_bound(v.begin(), v.end(), input) - v.begin();
    // if(ans == v.size())
    // return -1;
    
    // return v[ans];


    int ans = -1;
    // int p = -1;
    while(root != NULL)
    {
        if(root->data == input)
        {
            ans = root->data;
            return ans;
        }
        if(root->data > input)
        {
            ans = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    // if(ans != -1)
    // return ans;
    
    return ans;
    // Your code here
}

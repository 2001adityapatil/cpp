int floor(Node* root, int x) {
    // Code here
    int ans = -1;
    while(root != NULL)
    {
        if(root->data == x)
        {
            ans = root->data;
            return ans;
        }
        if(root->data < x)
        {
            ans = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return ans;
}

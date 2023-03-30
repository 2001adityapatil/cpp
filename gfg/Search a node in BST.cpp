bool search(Node* root, int x) {
    // Your code here
    while(root != NULL && root->data != x)
    {
        if(root->data < x)
        root = root->right;
        else
        root = root->left;
    }
    if(root == NULL)
    return false;
    
    return true;
}

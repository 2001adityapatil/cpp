    Node* getLastRight(Node *root)
    {
        if(root->right == NULL)
        return root;
        
        return getLastRight(root->right);
    }
 Node* helper(Node *root)
    {
        if(root->left == NULL)
        return root->right;
        else if(root->right == NULL)
        return root->left;
        
        Node *rightChild = root->right;
        Node *lastRight = getLastRight(root->left);
        lastRight->right = rightChild;
        return root->left;
    }
    
// Function to delete a node from BST.
Node *deleteNode(Node *root, int x) {
    // your code goes here
    if(root == NULL)
    return NULL;
    
    if(root->data == x)
    return helper(root);
    Node *dumy = root;
    while(root != NULL)
    {
        if(root->data < x)
        {
            if(root->left != NULL && root->left->data == x)
            {
                root->left = helper(root->left);
                break;
            }
            else
                root = root->left;
        }
        else
        {
            if(root->right != NULL && root->right->data == x)
            {
                root->right = helper(root->right);
                break;
            }
            else
                root = root->right;
        }
    }
    return dumy;
   
}

Node* insert(Node* root, int key) {
    // Your code here
    if(root == NULL)
    return new Node(key);
    
    Node *dumy = root;
    while(true)
    {
        if(root->data == key)
        break;
        if(root->data < key)
        {
            if(root->right != NULL)
            root = root->right;
            else
            {
                root->right = new Node(key);
                break;
            }
        }
        else
        {
            if(root->left != NULL)
            root = root->left;
            else
            {
                root->left = new Node(key);
                break;
            }
        }
    }
    return dumy;
}


//Function to return a list containing elements of left view of the binary tree.
void inorder(Node *root, vector<int> &res, int max_level)
{
    if(root == NULL)
    return;
    
    if(max_level == res.size())
    {
        res.push_back(root->data);
        // max_level = level;
    }
    inorder(root->left, res, max_level+1);
    inorder(root->right, res, max_level+1);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   int max_level = 0;
   inorder(root, res, max_level);
   return res;
}

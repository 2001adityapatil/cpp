/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
    Node *dumy = root;
    while(root != NULL)
    {
        if(root->key <= key)
        {
            // pre = root;
            root = root->right;
        }
        else
        {
            suc = root;
            root = root->left;
        }
    }
    root = dumy;
    while(root != NULL)
    {
        if(root->key < key)
        {
            pre = root;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }

}

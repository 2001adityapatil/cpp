
// Solution: declare two variables use preorder increase the count at root node call recursively till root null if root is null then its left and right is also null then 
// find the minimum if we are checking in the right of left subtree decrease the count by 1 after that it will go till last again it will check if the left and right is null
// or not and find the min in this way after all recursive calls it will return the minimum depth of tree;

class Solution {
public:
    int minDepth(TreeNode* root) {

        if(root == NULL)
        return 0;

        int m = INT_MAX;
        int c = 0;

        preorder(root, c, m);
        return m;
    }

    void preorder(TreeNode *root, int &c, int &m)
    {
        if(root == NULL)
        {
            return;
        }
        c++;
        if(root->left == NULL && root->right == NULL)
            m = min(c, m);

        preorder(root->left, c, m);
        preorder(root->right, c, m);
        c--;
    }
};


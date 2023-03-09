/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
    int value = root->val;
    bool ans = true;
    inorder(root, value, ans); 
    return ans;
    }

    void inorder(TreeNode *root, int value, bool &ans)
    {
        if(root == NULL)
        return;

        if(root->val != value)
        ans = false;

        inorder(root->left, value, ans);
        inorder(root->right, value, ans); 
    }
};

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
    bool isSymmetric(TreeNode* root) {
       return  preorder(root->left, root->right); 
    }

    bool preorder(TreeNode *left, TreeNode* right)
    {
        // if both left & right are null then return true
        if(left == NULL || right == NULL)
        return left==right;

        // if the value of both nodes return false
        if(left->val != right->val) 
        return false;

        // if any one is false return false else true
        // simultaneously checking values in left and right
        // like root->left->left with root->right->right
        // then root->left->right with root->right->left
        return preorder(left->left, right->right) && preorder(left->right, right->left);

    }


};

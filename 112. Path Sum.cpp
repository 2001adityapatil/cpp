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
    bool hasPathSum(TreeNode* root, int target) {
    //  5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 -1 1 -1 -1   

    bool res = false;
	int sum = 0;
	inorder(root, sum, res, target);

    return res;
    }

    void inorder(TreeNode *root, int &sum, bool &res, int target)
    {
	    if(root == NULL)
	    return;

	    sum = sum + root->val;
        cout<<sum<<" ";
        if(root->left == NULL && root->right == NULL)
	    {
            if(sum == target)
	        res = true;
            
        }
	    inorder(root->left, sum, res, target);
	    inorder(root->right, sum, res, target);

	    sum = sum - root->val;
    }
};

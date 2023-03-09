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
    int sumNumbers(TreeNode* root) {
    vector<int> ans;
    int sum = 0;
    preorder(root, ans, sum);
    return accumulate(ans.begin(), ans.end(), 0);    
    }
void preorder(TreeNode *root, vector<int> &ans, int &sum)
{
    if(root == NULL)
    return;
    
    // ds.push_back(root->data);
    sum = sum*10 + root->val;
    
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(sum);
    }
    
    
    preorder(root->left, ans, sum);
    preorder(root->right, ans, sum);
    sum = sum/10;
    
}
};



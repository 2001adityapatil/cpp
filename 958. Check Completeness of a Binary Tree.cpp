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
    bool isCompleteTree(TreeNode* root) {
    // empty tree return true
    if(root == NULL)
    return true;

    bool val = false;

    queue<TreeNode*> q;
    q.push(root);

    // val is set to false if the null value occurs then val is set to true when there is a element it will go in else part and return false;
    // dry run
    while(!q.empty())
    {
        TreeNode *tmp = q.front();
        q.pop();

        if(tmp == NULL)
        val = true;
        else
        {
            if(val)
            return false;
            q.push(tmp->left);
            q.push(tmp->right);
        }
    }
    return true;
    }
};

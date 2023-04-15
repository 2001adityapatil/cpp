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
    int goodNodes(TreeNode* root) {
    vector<int> res;
    res.push_back(root->val);
    int count = 0;
    int maxi = root->val;
    // dfs(root, res, count);
    dfs(root, maxi, count);

    return count;
    }
    void dfs(TreeNode *root, int maxi, int &count)
    {
        if(root == NULL)
        return;
        if(root->val >= maxi)
        {
            count++;
            maxi = root->val;
        }
        dfs(root->left, maxi, count);
        dfs(root->right, maxi, count);
    }
    // void dfs(TreeNode *root, vector<int> &res, int &count)
    // {
    //     if(root == NULL)
    //     return;

    //     int maxi = *max_element(res.begin(), res.end());
    //     if(root->val >= maxi)
    //     count++;
    //     res.push_back(root->val);
    //     dfs(root->left, res, count);
    //     dfs(root->right, res, count);
    //     res.pop_back();
    // }
};

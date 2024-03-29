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
    bool findTarget(TreeNode* root, int target) {
    vector<int> ans;
    inorder(root, ans);

    unordered_map<int, int> mp;
    for(int i = 0; i < ans.size();  i++)
    {
        int s = target-ans[i];
        if(mp.find(s) != mp.end())
        {
            return true;
            break;
        }
        else
            mp[ans[i]] = i;
    }

    return false;  
    }
    void inorder(TreeNode *root, vector<int> &ans)
    {
        if(root == NULL)
        return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
};

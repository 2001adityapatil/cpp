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
    int sumRootToLeaf(TreeNode* root) {
    vector<int> ans;
    string str = "";
    preorder(root, ans, str);

    return accumulate(ans.begin(), ans.end(), 0); 
    
    }


    void preorder(TreeNode *root, vector<int> &ans, string &str)
    {
        if(root == NULL)
        return;

        str = str + to_string(root->val);
        
        if(root->left == NULL && root->right == NULL)
        {
            int num = stoi(str, 0, 2);
            ans.push_back(num);
        }
        
        preorder(root->left, ans, str);
        preorder(root->right, ans, str);
        str.pop_back();
        
    }
};

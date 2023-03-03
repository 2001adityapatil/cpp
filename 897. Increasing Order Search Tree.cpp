class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
    vector<int> res;
    inorder(root, res);
    sort(res.begin(), res.end());

    TreeNode *ans = new TreeNode(res[0]);
    TreeNode *tmp = ans;
    for(int i = 1; i < res.size(); i++)
    {
        ans->right = new TreeNode(res[i]);
        ans = ans->right;
    }


    return tmp;
    }
    void inorder(TreeNode *root, vector<int> &res)
    {
        if(root == NULL)
        return;

        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
};

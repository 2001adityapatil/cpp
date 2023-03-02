class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool balance = abs(height(root->left)- height(root->right)) <= 1;
        if(left && right && balance)
        return true;

        return false;
    }

    int height(TreeNode *root)
    {
        if(root == NULL)
        return 0;

        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left, right)+1;
        return ans;
    }
};

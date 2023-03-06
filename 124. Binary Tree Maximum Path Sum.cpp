class Solution {
public:
    int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN;
    int sum = height(root, maxi);
    return maxi;   
    }

    int height(TreeNode *root, int &maxi)
    {
        if(root == NULL)
        return 0;
        
        int left = max(0, height(root->left, maxi));
        int right = max(0, height(root->right, maxi));
        
        maxi = max(maxi, (left+right+root->val));
        
        return max(left,right)+root->val;
    }
};

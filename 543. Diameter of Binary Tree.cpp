class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
    int maxi = 0;
    int check = height(root, maxi);  
    return maxi; 
    }
    int height(TreeNode *root, int &maxi)
    {
        if(root == NULL)
        return 0;

        int left = height(root->left, maxi);
        int right = height(root->right, maxi);

        maxi = max(left+right, maxi);

        return max(left,right)+1;
    }
};

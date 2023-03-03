// Solution: using extra space set we are putting all the values in set using inorder traversal i.e in ascending order if the set size is 1 then return -1 and if not 
// return second element from the set


class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> elements;
        inorder(root, elements);
        auto it = elements.begin();
        it++;
        if(elements.size() == 1)
        return -1;
        return *it;
    }

    void inorder(TreeNode* root, set<int> &elements)
    {
        if(root == NULL)
        return;

        inorder(root->left, elements);
        elements.insert(root->val);
        inorder(root->right, elements);
    }
};

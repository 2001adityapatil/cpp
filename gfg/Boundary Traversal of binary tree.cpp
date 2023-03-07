class Solution {
public:
    bool isLeaf(Node *root)
    {
        if(root->left == NULL && root->right == NULL)
        return true;
        
        return false;
    }
    void leftboundary(Node *root, vector<int> &res)
    {
        Node *curr = root->left;
        while(curr)
        {
            if(!isLeaf(curr))
            res.push_back(curr->data);
            if(curr->left)
            curr = curr->left;
            else 
            curr = curr->right;
        }
    }
    void rightboundary(Node *root, vector<int> &res)
    {
        Node *curr = root->right;
        vector<int> tmp;
        while(curr)
        {
            if(!isLeaf(curr))
            tmp.push_back(curr->data);
            if(curr->right)
            curr = curr->right;
            else
            curr = curr->left;
        }
        for(int i = 0; i < tmp.size(); i++)
        res.push_back(tmp[tmp.size()-i-1]);
    }
    void leafnodes(Node *root, vector<int> &res)
    {
        if(isLeaf(root))
        {
            res.push_back(root->data);
            return;
        }
        if(root->left)
        leafnodes(root->left, res);
        if(root->right)
        leafnodes(root->right, res);
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> res;
        if(root == NULL)
        return res;
        if(!isLeaf(root))
        res.push_back(root->data);
        
        leftboundary(root, res);
        leafnodes(root, res);
        rightboundary(root, res);
        
        return res;
    }
};

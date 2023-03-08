class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        
        if(root == NULL)
        return ans;
        
        // vertical line, Node Value 
        map<int, int> mp;
        
        // node, vertical line
        queue<pair<Node*, int>> q;
        
        // push the first node
        q.push({root, 0});
        
        // iterate till queue is empty
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            // Node is in first part of pair
            Node* tmp = p.first;
            
            // Vertical line is second part of pair
            int line = p.second;
            
            // if line found in map update it with the node's val
            // else not found map line with node's val
            if(mp.find(line) != mp.end())
            mp[line] = tmp->data;
            else
            mp[line] = tmp->data;
            
            // if left node is their decrease line by 1
            if(tmp->left)
            q.push({tmp->left, line-1});
            
            // if right node is their increase line by 1
            if(tmp->right)
            q.push({tmp->right, line+1});
        }
        for(auto p: mp)
        ans.push_back(p.second);
        
        return ans;
        
    }
};

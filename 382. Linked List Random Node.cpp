/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    ListNode *tmp;
    Solution(ListNode* head) {
        res = {};
        tmp = head;
    }
    
    int getRandom() {
        while(tmp != NULL)
        {
            res.push_back(tmp->val);
            tmp = tmp->next;
        }
        // srand(time(0));
        int rand_ind = rand() % res.size();
        return res[rand_ind];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

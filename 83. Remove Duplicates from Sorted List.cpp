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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *d = head;
        vector<int> tmp;
        while(d!=NULL)
        {
            tmp.push_back(d->val);
            d = d->next;
        }

        sort(tmp.begin(), tmp.end());
        tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

        ListNode *m = new ListNode(0);
        ListNode *t = m;
        
        // cout<<tmp.size();
        for(int i = 0; i < tmp.size(); i++)
        {
            t->next = new ListNode(tmp[i]);
            t = t->next; 
        }
        return m->next;
    }
};

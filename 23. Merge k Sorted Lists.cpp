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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<int> res;
    for(int i = 0; i < lists.size(); i++)
    {
        while(lists[i] != NULL)
        {
            res.push_back(lists[i]->val);
            lists[i] = lists[i]->next;
        }
    }    
    if(res.size() == 0)
    return NULL;

    sort(res.begin(), res.end());

    // for(int i = 0; i < res.size(); i++)
    // cout<<res[i];
    ListNode *tmp = new ListNode(0);
    ListNode *head = tmp;
    for(int i = 0; i < res.size(); i++)
    {
        tmp->next = new ListNode(res[i]);
        tmp = tmp->next;
    }

    return head->next;
    }
};

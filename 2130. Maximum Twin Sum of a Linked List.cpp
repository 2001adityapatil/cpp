// Solution 1: brute force
// Solution 2: reverse the linked list from middle of linked list then add
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
    int pairSum(ListNode* head) {
    vector<int> res;
    while(head != NULL)
    {
        res.push_back(head->val);
        head = head->next;
    }
    int maxi = -1;
    for(int i = 0; i < res.size()/2; i++)
        maxi = max(maxi, (res[i] + res[res.size()-1-i]));
 
    return maxi;
    }
};

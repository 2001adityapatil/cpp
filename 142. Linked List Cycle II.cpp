// Solution: store address of each node in map if the we found the address again at that point return the pointer otherwise it will loop at last if it is not cycle it will return null

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<const ListNode *, int> addr;
        while(head != NULL)
        {
            if(addr.find(head) != addr.end())
            return head;
            else
            addr[head] = head->val;

            head = head->next; 
        }
        return NULL;
    }
};

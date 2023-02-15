// Solution: create map where we are storing the node address and its value iterating over the linklist until d1 != null actually it will be not equal to null 
// then we are checking if the address is available in map or not if yes return true else store the pair in map at last if not true return false
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
    bool hasCycle(ListNode *head) {
        ListNode *d1 = head;
        unordered_map<const ListNode *, int> addr;
        while(d1 != NULL)
        {
            if(addr.find(d1) != addr.end())
            return true;
            else
            {
                addr[d1] = d1->val;
            }
            d1 = d1->next;
        }
        return false;
    }
};

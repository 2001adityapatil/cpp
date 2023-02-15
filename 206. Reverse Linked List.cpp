// Solution: take a dumpy pointer initially pointing to NULL and then iterate over the list where nex pointer is pointing to the head's next node at first head will 
// point to NULL bcoz d is NULL now d will point on head and head will move ahead on nex same loop will continue at last head and nex will point to NULL and dumy d
// pointer will be the head of linklist;
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
    ListNode* reverseList(ListNode* head) {

        ListNode *d = NULL;

        while(head != NULL)
        {
            ListNode *nex = head->next;
            head->next = d;
            d = head;
            head = nex;
        }
        return d;
    }
};

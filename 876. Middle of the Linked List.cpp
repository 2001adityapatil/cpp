// Solution: use slow and fast pointer where slow will move by one step and fast will move by two steps logic keep both pointer on head and then start traversing 
// such that fast != NULL && fast->next != NULL also fast->next != NULL && fast->next->next != NULL thats it slow is ur middle node of linked list
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
    ListNode* middleNode(ListNode* head) {
       

        ListNode* slow = head, *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

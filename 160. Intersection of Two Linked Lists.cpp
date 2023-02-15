// Solution: create two dumy pointer pointing to head and traverse till null if points to last node point it another list head if at point they intersect the value will be equal of both nodes then return true else false 
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode *d1 = headA;
       ListNode *d2 = headB;
        // cout<<d1;
       while(d1 != d2) 
       {
            if(d1 == NULL)
                d1 = headB;
            else
                d1 = d1->next;
        
            if(d2 == NULL)
                d2 = headA;
            else
                d2 = d2->next;
       }
       if(d1 == d2)
       return d1;
       else
       return NULL;
    }
};

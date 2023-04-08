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
    ListNode *prev = NULL;
    ListNode *nxt = head;
    if(head == NULL)
    return NULL;
    if(head->next == NULL)
    return head;

    while(nxt != NULL)
    {
        ListNode *tmp = NULL;
        int c = 0;
        while(nxt->next != NULL && nxt->val == nxt->next->val)
        {
            nxt = nxt->next;
            tmp = nxt->next;
            c = 1;
        }
        if(tmp != NULL || c != 0)
        {
            if(prev == NULL)
            {
           
            head = tmp; 
            prev = NULL;

            }
            else
            prev->next = tmp;

            nxt->next = NULL;
            nxt = tmp; 
        }
        else
        {
            //  cout<<"hoo";
            prev = nxt;
            nxt = nxt->next;
        }
    }
    return head;
    }
};

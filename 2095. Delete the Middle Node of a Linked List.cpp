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
    ListNode* deleteMiddle(ListNode* head) {
    if(head->next == NULL || head == NULL)
    return NULL;
    // ListNode *slow = head;
    // int c = 0;
    // while(slow != NULL)
    // {
    //     c++;
    //     slow = slow->next;
    // }
    // c = c/2;

    // ListNode *tmp = head;
    // ListNode *prev = NULL;
    // while(c--)
    // {
    //     prev = tmp;
    //     tmp = tmp->next;
    // }

    // prev->next = tmp->next;
    // tmp->next = NULL;

    // return head;
    ListNode* slow = head, *fast = head;
    ListNode *prev = NULL;  
    while(fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    slow->next = NULL;

    return head;
    }
};

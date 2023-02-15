// Solution: two ways using brute force take a extra space save all node values and reverse it check if it is palindrome or not 
// Solution 2: Where we are finding the middle of linklist using fast and slow pointer then we are reversing the list from the slow->next node after reversing we are pointing slow to reverse linklist head i.e pre in this case and then iterating again checking if head->val equal to slow->val if not return false if equal all the time return true. refer reverse and middle linklist for better understanding.

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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head; 
        ListNode *fast = head;
       while(fast->next != NULL && fast->next->next != NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
       }

    //    ListNode *d = slow;
    ListNode *pre = NULL;
    // ListNode *nex = NULL;
       ListNode *tmp = slow->next;
       while(tmp != NULL)
       {
           ListNode *nex = tmp->next;
           tmp->next = pre;
           pre = tmp;
           tmp = nex;
       }
        // slow->next = pre;
        slow = pre;
        while(slow != NULL)
        {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
       return true;
    }
};

// Solution: count number of nodes if the k is greater then get remainder. get the value from first node take another pointer pointing next to head and change the value of each next node with previous node and at last chnge the value of last node with the value present in the temp variable;
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

    ListNode *dumy = head;
    int c = 0;
    while(dumy != NULL)
    {
        c++;
        dumy = dumy->next;
    }
    if(k > c)
    {
        k = k % c;
    }
     for(int i = 0; i < k; i++)
     {
         int tmp1 = head->val;
         ListNode *nex = head->next;
         while(nex != NULL)
         {
             int tmp = nex->val;
             nex->val = tmp1;
             tmp1 = tmp;
             nex = nex->next;
         }
         head->val = tmp1;
     }  
     return head; 
    }
};

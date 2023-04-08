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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // ListNode *tmp = new ListNode(0);
    // ListNode *tail = tmp;
    
    // vector<int> res;

    // while(list1 != NULL)
    // {
    //     res.push_back(list1->val);
    //     list1 = list1->next;
    // }

    // while(list2 != NULL)
    // {
    //     res.push_back(list2->val);
    //     list2 = list2->next;
    // }
    // sort(res.begin(), res.end());

    // for(int i = 0; i < res.size(); i++)
    // {
    //     ListNode *curr = new ListNode(res[i]);
    //     tail->next = curr;
    //     tail = curr;
    // }
    

    // return tmp->next;

    ListNode *tmp = new ListNode(0);
    ListNode *start = tmp;

    while(list1 != NULL && list2 != NULL)
    {
        if(list1->val <= list2->val)
        {
            tmp->next = list1;
            tmp = tmp->next;
            list1 = list1->next;
        }
        else
        {
            tmp->next = list2;
            tmp = tmp->next;
            list2 = list2->next;
        }
    }

    if(list1)
    tmp->next = list1;
    else
    tmp->next = list2;

    return start->next;
    }
};

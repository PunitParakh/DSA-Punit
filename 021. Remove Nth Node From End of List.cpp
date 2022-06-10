Question - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

Code - 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size=1;
        ListNode *first = head;
        ListNode *second = head;
        
        while(n--)
            first = first->next;
        
        if(first == nullptr)
        {
            head = head->next;
            return head;
        }
        while(first->next != nullptr)
        {
            first = first->next;
            second = second->next;
        }
        
        second->next = second->next->next;
        
        return head;
        
    }
};

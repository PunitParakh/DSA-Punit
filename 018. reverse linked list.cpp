Question - https://leetcode.com/problems/reverse-linked-list/

Code - 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = NULL;
        
        while(head!=NULL)
        {
            ListNode* next = head->next;
            head->next = dummy;
            dummy = head;
            head = next;
        }
        
        return dummy;
    }
};

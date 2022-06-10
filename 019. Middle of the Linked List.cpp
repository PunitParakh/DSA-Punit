Qestion - https://leetcode.com/problems/middle-of-the-linked-list/

Code -

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head,*fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

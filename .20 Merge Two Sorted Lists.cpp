Question - https://leetcode.com/problems/merge-two-sorted-lists/
Code - 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        
        ListNode* result;
        if(l1->val > l2->val)
           swap(l1,l2);
        
        result = l1;
        
        ListNode* temp = NULL;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val){
                temp = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                swap(l1,l2);
            }
        }
        
        if(l2)
            temp->next = l2;

        return result;
    }
};

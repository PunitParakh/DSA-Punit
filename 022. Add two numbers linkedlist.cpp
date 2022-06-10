Question - https://leetcode.com/problems/add-two-numbers/

Code - 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        
        while(l1 != NULL && l2 != NULL)
        {
            int value = l1->val+l2->val+carry;
            carry = 0;
            if(value>9)
            {
                carry = value/10;
                value = value%10;
            }
            
            ans->next = new ListNode(value);
            l1 = l1->next;
            l2 = l2->next;
            ans = ans->next;
        }
        
        while(l1)
        {
            int value = l1->val+carry;
            carry = 0;
            if(value>9)
            {
                carry = value/10;
                value = value%10;
            }
            
            ans->next = new ListNode(value);
            l1 = l1->next;
            ans = ans->next;
        }
        
        while(l2)
        {
            int value = l2->val+carry;
            carry = 0;
            if(value>9)
            {
                carry = value/10;
                value = value%10;
            }
            
            ans->next = new ListNode(value);
            l2 = l2->next;
            ans = ans->next;
        }
        
        if(carry)
            ans->next = new ListNode(carry);
        
        return temp->next;
        
    }
};

Question - https://leetcode.com/problems/majority-element/

Code - 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Boyer-Moore Voting Algorithm
        int count=0;
        int candidate=-1;
        
        for(int i:nums)
        {
            if(count == 0)
                candidate = i;
            
            if(i == candidate)
                count++;
            else
                count--;
        }
        
        return candidate;
        
    }
};

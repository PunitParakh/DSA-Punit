Question - https://leetcode.com/problems/majority-element-ii/

Code - 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        int candidate1=-1,candidate2=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(candidate1 == nums[i])
                count1++;
            else if(candidate2 == nums[i])
                count2++;
            else if(count1 == 0)
            {
                candidate1 = nums[i];
                count1=1;
            }
            else if(count2 == 0)
            {
                candidate2 = nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        count1 = count2 = 0;
        vector<int> ans;
        
        for(auto i:nums)
        {
            if(candidate1 == i)
                count1++;
            else if(candidate2 == i)
                count2++;
        }
        
        if(count1 > nums.size()/3)
            ans.push_back(candidate1);
        if(count2 > nums.size()/3)
            ans.push_back(candidate2);
        
        return ans;
        
    }
};

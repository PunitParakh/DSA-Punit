Question - https://leetcode.com/problems/4sum/
  
Code - 
  
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> ans;
        int n = nums.size();
        if(n==0)
            return ans;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int front = j+1;
                int back = n-1;
                int target_2 = target-nums[i]-nums[j]; 

                while(front<back)
                {
                    if(nums[front]+nums[back] == target_2)
                    {
                        vector<int> t = {nums[i],nums[j],nums[front],nums[back]};
                        ans.emplace_back(t);

                        while(nums[front] == t[2] && front<back)
                            front++;
                        while(nums[back] == t[3] && front<back)
                            back--;
                    }
                    else if(nums[front]+nums[back] > target_2)
                        back--;
                    else
                        front++;
                }

                while(j<n-1 && nums[j+1] == nums[j])
                    j++;
            }

            while(i<n-1 && nums[i+1] == nums[i])
                    i++;
        }
        return ans; 
    }
};

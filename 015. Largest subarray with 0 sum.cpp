Question - https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

Code - 

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int ans = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (mp.find(sum) != mp.end())
                ans = max(ans, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return ans;
    }
};

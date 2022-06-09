# Question link -- https://leetcode.com/problems/remove-palindromic-subsequences/

Code :-

class Solution {
public:
    bool ispalindrom(string s)
    {
        int n = s.size();
        for(int i=0;i<n/2;i++)
            if(s[i] != s[n-i-1])
                return false;
        
        return true;
    }
    int removePalindromeSub(string s) {
        if(ispalindrom(s))
            return 1;
        
        return 2;
    }
};

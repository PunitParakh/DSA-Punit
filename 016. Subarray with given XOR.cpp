Question - https://www.interviewbit.com/problems/subarray-with-given-xor/


Code - 
#include<bits/stdc++.h>

int Solution::solve(vector<int> &A, int B) {
    map<int,int> m;
    int ans=0;
    int X=0;

    for(auto i:A)
    {
        X ^= i;

        if(X == B)
            ans++;
        
        if(m.find(X^B) != m.end())
            ans += m[X^B];

        m[X]++;
    }

    return ans;
}

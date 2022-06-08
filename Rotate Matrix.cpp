Question - https://leetcode.com/problems/rotate-image/submissions/

Code :- 

// -- below code is with extra space  --
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        vector<vector<int>> ans(n,vector<int>(n));
        int l=0;
        
        for(int i=0;i<n;i++)
            for(int j=n-1;j>=0;j--){
                ans[i][l++] = matrix[j][i];
                l=l%n;
            }
        
        matrix = ans;
    }
};


// -- below code is in placed without extra space --

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        //firstly transposing the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //now reversing every row
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

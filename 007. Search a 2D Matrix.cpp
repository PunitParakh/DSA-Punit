Qestion - https://leetcode.com/problems/search-a-2d-matrix/submissions/

Code - 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row =matrix.size();
        int col = matrix[0].size();
        int r=0;
        
        
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]>target)
                break;
            r=i;
        }
        
        for(int i=0;i<col;i++)
        {
            if(matrix[r][i]==target)
            {
                return true;
            }
        }
        
        
        return false;
    }
};

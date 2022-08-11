class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column= matrix[0].size();
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        
        return false;
    }
};
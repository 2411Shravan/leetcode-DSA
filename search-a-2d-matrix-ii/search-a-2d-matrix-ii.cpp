class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int allsize=matrix.size();
        int singlesize=matrix[0].size();
        
        int index=matrix[0].size()-1;
       
        int i=0;
        while(i<allsize and index>=0){
            if(matrix[i][index]==target){
                return true;
            }
            else if(matrix[i][index]>target){
                index--;
            }
            else{
                i++;
            }
        }
        return false;
        
    }
};
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        //first caculate primary diagonal
        //the calculate secondary diagonal
        //then append both to get final answers
        
        //caculating the primary diagonal
        if(mat.size()==1){
            return mat[0][0];
        }
        int j=0;
        int sum2=0;
        int sum1=0;
        int finalSum;
        for(int i=0;i<mat.size();i++){
            sum1=sum1+mat[i][j];
            j++;
            
        }
        
        j=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            if(i==j){
                j--;
                continue;
            }
            cout<<mat[i][j]<<endl;
            sum2=sum2+mat[i][j];
            j--;
        }
        cout<<sum2<<endl;
        
        return sum1+sum2;
    }
};
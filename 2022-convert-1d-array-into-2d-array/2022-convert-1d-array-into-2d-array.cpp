class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m,vector<int>(n));
            
            int h=0;
        if(original.size()!=m*n){
            vector<vector<int>> resv;
            return resv;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=original[h];
                h++;
            }
        }
        return res;
    }
};
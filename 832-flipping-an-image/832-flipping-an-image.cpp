class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r=image.size();
        int c=image[0].size();
        vector<vector<int>> result(r,vector<int>(c));
        int h=0;
        for(int i=0;i<image.size();i++){
            vector<int> make;
            h=0;
            for(int j=image[0].size()-1;j>=0;j--){
                result[i][h]=image[i][j];
                h++;
            }
        }
        
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                if(result[i][j]==1){
                    result[i][j]=0;
                }
                else{
                    result[i][j]=1;
                }
            }
        }
        return result;
    }
};
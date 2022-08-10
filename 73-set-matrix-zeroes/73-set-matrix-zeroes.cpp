class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        cout<<"Rows - >"<<m<<" and columns ->"<<n<<endl;
        vector<pair<int,int>> mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    mp.push_back(make_pair(i,j));
                }
            }
        }
        
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        
        for(auto it:mp){
            int constx=it.first;
            for(int j=0;j<n;j++){
                if(matrix[constx][j]==0){
                    continue;
                }
                else{
                   matrix[constx][j]=0; 
                }
            }
            
            int consty=it.second;
            for(int j=0;j<m;j++){
                if(matrix[j][consty]==0){
                    continue;
                }
                else{
                   matrix[j][consty]=0; 
                }
            }
                   
        }
        
        cout<<mp.size()<<endl;
    }
};
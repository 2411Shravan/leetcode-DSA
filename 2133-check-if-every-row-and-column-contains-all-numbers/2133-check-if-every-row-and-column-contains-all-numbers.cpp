class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int constCol=0;
        int constRow=0;
        
        int size=0;
        while(size<row){
            set<int> a;
            set<int> b;
            set<int> s;
            for(int i=0;i<row;i++ ){
                s.insert(i+1);
            }
            for(int i=0;i<row;i++){
                a.insert(matrix[i][constCol]);
            }
            
            for(int i=0;i<col;i++){
                b.insert(matrix[constRow][i]);
            }
            if(a==s && b==s){
                size++;
                constCol++;
                constRow++;
                continue;
            }
            else if(a!=s || b!=s){
                return false;
            }
        }
        
        return true;
    }
};
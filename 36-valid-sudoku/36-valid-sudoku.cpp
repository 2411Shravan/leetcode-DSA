class Solution {
public:
    
    
    bool checkRow(vector<vector<char>>& board , int row , int col){
        set<char>st;
        
        for(int i = 0;i<9;i++){
            if(board[row][i]== '.'){
                
            }
            else if(st.find(board[row][i])!=st.end()){
                return false ;
            }else {
                st.insert(board[row][i]);
            }
        }
        
        return true ;
    }
    
    bool checkCol(vector<vector<char>>& board , int row , int col){
        set<char>st;
        
        for(int i = 0;i<9;i++){
            if(board[i][col]== '.'){
                
            }
            else if(st.find(board[i][col])!=st.end()){
                return false ;
            }else {
                st.insert(board[i][col]);
            }
        }
        
        return true ;
    }
    
    bool checkBox(vector<vector<char>>& board , int row , int col){
        set<char> st;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(board[i+row][j+col]=='.'){
                    
                }else if(st.find(board[i+row][j+col])!=st.end()){
                    return false;
                }else{
                    st.insert(board[i+row][j+col]);
                }
            }
        }
        
        return true;
    }
    
    bool isValid(vector<vector<char>>& board , int i , int j){
        return checkRow(board , i , j) && checkCol(board , i , j) && checkBox(board , i - i%3 , j - j%3 );
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int n= board.size();
        int m = board[0].size();
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(!isValid(board , i , j)){
                    return false ;
                }
            }
        }
        return true ;
    }
};
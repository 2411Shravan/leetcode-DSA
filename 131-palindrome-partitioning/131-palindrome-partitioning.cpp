class Solution {
public:
vector<vector<string>> res;
    
    vector<string> part;
    
    bool ispalin(string& str, int i, int j)
    {
        while(i <= j)
        {
            if(str[i] != str[j])
                return false;
            
            i++;
            j--;
        }
        
        return true;
    }
    
    void helper(string& str, int i, int n)
    {
        if(i >= n)
        {
            res.push_back(part);
            return;
        }
        
        for(int j = i; j < n; j++)
        {
            if(ispalin(str, i, j))
            {
                part.push_back(str.substr(i, j-i+1));
                helper(str, j+1, n);
                part.pop_back();    
            }
        }
    }
    
    vector<vector<string>> partition(string str) {
        
        int n = str.size();
        
        helper(str, 0 , n);
        
        return res;
    }
        
    
};
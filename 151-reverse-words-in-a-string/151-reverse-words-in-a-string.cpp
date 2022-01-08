class Solution {
public:
    string reverseWords(string s) {
           vector<string> v;
        stringstream ss(s);
        string word;
        while (ss >> word)
            v.push_back(word);
        
        reverse(v.begin(), v.end());
        
        string ans;
        for ( auto it : v) 
            ans+=" "+it;
        ans.erase(0,1); 
        
        return ans;
    }
};
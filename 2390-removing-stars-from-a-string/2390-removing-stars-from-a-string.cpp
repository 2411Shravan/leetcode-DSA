class Solution {
public:
    string removeStars(string s) {
        stack<char> res;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                res.pop();
            }
            else{
                res.push(s[i]);
            }
        }
        
        string result="";
        
        while(!res.empty()){
            result+=res.top();
            res.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
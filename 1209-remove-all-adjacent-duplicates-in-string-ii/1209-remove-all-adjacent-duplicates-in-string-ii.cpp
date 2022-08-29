class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stk;
        
        for(int i=0;i<s.size();i++){
            char d=s[i];
            
            if(stk.empty()){
                stk.push(make_pair(d,1));
                continue;
            }
            
            auto[ch,cnt]=stk.top();
            if(d == ch) {
                if(cnt+1 >= k) {
                    stk.pop();
                } else {
                    stk.top().second++;
                }
            } else {
                stk.push(make_pair(d, 1));
            }
        }
        string res = "";
        
        while(!stk.empty()) {
            auto [c, count] = stk.top();
            res = string(count, c) + res;
            stk.pop();
        }
        return res;
    }
};
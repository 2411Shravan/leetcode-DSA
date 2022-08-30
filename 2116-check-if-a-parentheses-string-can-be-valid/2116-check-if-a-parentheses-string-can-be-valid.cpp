class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size()%2){
            return false;
        }
        
        int c=0;
        for(int i=0;i<s.length();i++)       //checking for locked ')'
        {
            if(locked[i]=='0' || s[i]=='(')
                c++;
            else if(locked[i]=='1' && s[i]==')')
            {
                c--;
                if(c<0)
                    return false;
            }
        }
        c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(locked[i]=='0' || s[i]==')'){
                c++;
            }
            else if(locked[i]=='1' && s[i]=='('){
                c--;
                if(c<0){
                    return false;
                }
            }
        }
        return true;
    }
};
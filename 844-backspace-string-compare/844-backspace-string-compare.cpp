class Solution {
public:
    bool backspaceCompare(string s, string t) {
         int sSize = s.length();
        int tSize = t.length();
        
        stack<char> sStack;
        stack<char> tStack;
        
        for(int i = 0; i < sSize; i++)
        {
            if(s[i] != '#')
                sStack.push(s[i]);
            else
            {
                if(!sStack.empty())
                    sStack.pop();
            }
        }
        
        for(int i = 0; i < tSize; i++)
        {
            if(t[i] != '#')
                tStack.push(t[i]);
            else
            {
                if(!tStack.empty())
                    tStack.pop();
            }
        }
        
        if(sStack.size() == tStack.size())
        {
            while(!sStack.empty())
            {
                if(sStack.top() == tStack.top())
                {
                    sStack.pop();
                    tStack.pop();
                }
                else
                    return false;
            }
        }
        else
            return false;
        
        return true;
    }
};
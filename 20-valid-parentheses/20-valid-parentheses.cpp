class Solution {
public:
    bool isValid(string s) {
        stack<char> iget;
        char x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                iget.push(s[i]);
            }
            if(iget.empty()){
                return false;
            }
            
            switch(s[i]){
                case  '}': x = iget.top();
                              iget.pop();
                              if(x=='(' || x=='['){
                                  return false;
                              }  
                    break;
                    
                case  ')': x = iget.top();
                              iget.pop();
                              if(x=='{' || x=='['){
                                  return false;
                              }  
                    break;
                    
                case  ']': x = iget.top();
                              iget.pop();
                              if(x=='(' || x=='{'){
                                  return false;
                              }  
                    break;
                    
            }
            
        }
        if(iget.empty()){
                return true;
            }
            return false;
    }
};
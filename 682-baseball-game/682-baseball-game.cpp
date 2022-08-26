class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> res;
        int returnVal=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                res.pop();
            }
            else if(ops[i]=="D"){
                res.push(2*res.top());
            }
            else if(ops[i]=="+"){
                int x=res.top();
                res.pop();
                int y=res.top();
                res.pop();
                res.push(y);
                res.push(x);
                res.push(x+y);
            }
            else{
                res.push(stoi(ops[i]));
            }
            }
            
        
        
        while(!res.empty()){
            // int e=res.top()-'0';
            returnVal+=res.top();
            res.pop();
        }
        return returnVal;
    }
};
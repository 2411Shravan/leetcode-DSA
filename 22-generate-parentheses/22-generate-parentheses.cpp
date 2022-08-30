class Solution {
public:
    void generate_parenthesis(string current,int open, int close,int n, vector<string>&per){
        if(open==n && close==n){
            cout<<current<<endl;
           per.push_back(current);
            return;
        }
        if(open<n){
            cout<<"open->"<<open<<"close->"<<close<<"n->"<<n<<endl;
            generate_parenthesis(current+"(",open+1,close,n,per);
        }
        if(close<open){
            cout<<"open->"<<open<<"close->"<<close<<"n->"<<n<<endl;
            generate_parenthesis(current+")",open,close+1,n,per);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> per;
        generate_parenthesis("",0,0,n,per);
        return per;
    }
};
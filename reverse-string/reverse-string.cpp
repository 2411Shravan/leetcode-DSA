class Solution {
public:
    void reverseStr(int low,int high,vector<char>& s){
        if(low<=high){
           char temp=s[high];
        s[high]=s[low];
        s[low]=temp;
            reverseStr(low+1,high-1,s);
        }
        
        
        else{
            return;
        }
    }
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        reverseStr(low,high,s);
    }
};
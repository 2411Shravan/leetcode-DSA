class Solution {
public:
    string addBinary(string a, string b) {
        
        int s=a.size()-1,k=b.size()-1;
    
        int sum,carry=0;
        string res;
        
               
        while(s>=0 || k>=0){
            sum=carry;
            if(s>=0){
                sum+=(a[s]-'0');
            }
            if(k>=0){
                sum+=(b[k]-'0');
            }
            
            res+=to_string(sum%2);
            carry=sum/2;
            s--;
            k--;
        }
        if(carry!=0){
            res+='1';
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};
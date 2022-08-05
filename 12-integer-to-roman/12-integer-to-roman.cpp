class Solution {
public:
    string intToRoman(int num) {
        int numbers[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ret_ans="";
        for(int i=0;num;i++){
            while(num>=numbers[i]){
                ret_ans+=roman[i];
                num-=numbers[i];
            }
        }
        
        return ret_ans;
    }
};
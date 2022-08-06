class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        
        int squared_num=0;
        int i=1;
        while(temp>0){
            int temp1=temp%10;
            squared_num+=temp1*temp1;
            // i=i*10;
            temp=temp/10;
        }
        cout<<squared_num<<endl;
        if(squared_num == 1 || squared_num == 7){
            return true;
        }
        else if((squared_num/10)!=0){
            return isHappy(squared_num);
        }
        
        return false;
        
    }
};
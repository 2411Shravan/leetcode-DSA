class Solution {
public:
    int bitwiseComplement(int n) {
        int result=0;
        if(n==0){
            return 1;
        }
        vector<int> can;
        
        while(n){
            int es=n%2;
            can.push_back(es);
            n=n/2;
        }
        
        for(int i=0;i<can.size();i++){
            if(can[i]==1){
                can[i]=0;
            }
            else{
                can[i]=1;
            }
        }
        
        int x=0;
        
        while(x<can.size()){
            result=result+(can[x]*pow(2,x));
            x++;
        }
        return result;
    }
};
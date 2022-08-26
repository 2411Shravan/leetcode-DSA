class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cont=1;
        int res=0;
        for(int i=0;i<logs.size();i++){
            if((i==0) && (logs[i]=="../" || logs[i]=="./") && (cont )){
                continue;
            }
            if(logs[i]=="../" && res>0){
                cont=0;
                res--;
            }
            else if(logs[i]=="../" && res==0){
               continue;
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                res++;
            }
        }
        return res;
    }
};
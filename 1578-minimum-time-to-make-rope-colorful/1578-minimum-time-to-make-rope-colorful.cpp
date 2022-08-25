class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int result=0;
        int last=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[last]){
                if(neededTime[i]>=neededTime[last]){
                    result+=neededTime[last];
                    last=i;
                }
                else{
                    result+=neededTime[i];
                }
            }
            else{
                last=i;
            }
        } 
        return result;
    }
};
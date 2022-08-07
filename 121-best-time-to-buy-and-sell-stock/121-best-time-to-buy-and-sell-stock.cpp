class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int arrSize=prices.size();
        int profit=0;
        int mini=INT_MAX;
        
       for(int i=0;i<arrSize;i++){
           mini=min(mini,prices[i]);
           profit=max(profit,prices[i]-mini);
       }
            
        
        
        return profit;
    }
};
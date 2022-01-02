class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector <int> ans(60,0);
        for(int i = 0; i < time.size(); i++)
        {
            int j = time[i] % 60;
            if(j == 0)            
                count += ans[0];
            else count += ans[60 - j];
            
            ans[j]++;   
            
        }
        
        return count;
    }
};
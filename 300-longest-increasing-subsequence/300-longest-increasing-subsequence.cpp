class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res; res.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int p=nums[i];
            if(p>res.back())
                {res.push_back(p);continue;}
            int idx=lower_bound(res.begin(),res.end(),p)-res.begin();
            if(idx==res.size()) 
                continue;
            res[idx]=p;
        }
        return res.size();
    }
};
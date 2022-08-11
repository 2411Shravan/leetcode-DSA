class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int ans = nums.size();
        int remove_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            remove_sum = (remove_sum+nums[i])%p;
        }
        if(remove_sum==0) return 0;
        unordered_map<int,int>m;
        m[0] = -1;
        int curr = 0;
        for(int i=0;i<nums.size();i++)
        {
            curr = (curr+nums[i])%p;
            m[curr] = i;
            int rem = (curr-remove_sum+p)%p;
            if(m.find(rem)!=m.end())
            {
                ans = min(ans,i-m[rem]);
            }   
        }
    return ans>=nums.size() ? -1:ans;
    }
};
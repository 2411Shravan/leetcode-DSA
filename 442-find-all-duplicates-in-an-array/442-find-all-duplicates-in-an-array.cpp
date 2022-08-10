class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]=mp[nums[i]]+1;
            }
            else{
                mp[nums[i]]=1;
            }
        }
        
        for(auto it:mp){
            if(it.second==2){
                result.push_back(it.first);
            }
        }
        
        return result;
    }
};
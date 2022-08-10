class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int continuity=1;
        vector<int> result;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> re;
        
        for(int i=0;i<nums.size();i++){
            re[nums[i]]++;
        }
        
        for(int i=1;i<=nums.size();i++){
            if(re[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};
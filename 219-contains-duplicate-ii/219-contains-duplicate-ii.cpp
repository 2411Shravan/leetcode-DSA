class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end()){if(abs(umap[nums[i]]-i)<=k){return true;} umap[nums[i]]=i; }
            else{umap[nums[i]]=i;}
        }
        return false;
    }
};
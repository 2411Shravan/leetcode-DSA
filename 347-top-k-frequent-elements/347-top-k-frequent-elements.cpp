class Solution {
public:
    
    static int comp(pair<int,int> a,pair<int,int> b){ // Using mycomperator function
            return (a.second>b.second);
        }
    
    vector<int> topKFrequent(vector<int>& nums, int k){
        // sort(nums.begin(),nums.end());
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end()){
                umap[nums[i]]=umap[nums[i]]+1;
            }
            else{
                umap[nums[i]]=1;
            }
        }
        
        vector<int> retResult;
        
        vector<pair<int,int>> rod;
        for(auto it:umap){
            rod.push_back(make_pair(it.first,it.second));
        }
        
        sort(rod.begin(),rod.end(),comp);
        for(int i=0;i<k;i++){
            retResult.push_back(rod[i].first);
        }
        return retResult;
    }
};
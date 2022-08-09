class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int continuity=1;
        int c=0;
        sort(nums.begin(),nums.end());
        if((nums.size()==1 && nums[0]==1) || (nums.size()==1 && nums[0]==0)){
            return !nums[0];
        }
        
        // if(nums.size()==1 && nums[0]==0){
        //     return 1;
        // }
        if(nums[0]==1){
            return 0;
        }
        
        for(int i=0;i<nums.size();i++){
            if(i==0){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                continuity=1;
                continue;
            }
            else{
                continuity=0;
                c=nums[i]-1;
                break;
            }
        }
        
        if(continuity==1){
            return nums[nums.size()-1]+1;
        }
        
        return c;
    }
};
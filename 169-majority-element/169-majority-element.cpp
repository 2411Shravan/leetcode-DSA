class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        
        return nums[mid];
    }
};
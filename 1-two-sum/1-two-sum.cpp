class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>  ref;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ref.push_back(i);
                    ref.push_back(j);
                }
                    
                }
            }
              return ref;  
            }
    
        };
    
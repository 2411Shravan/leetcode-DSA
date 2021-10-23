
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]





// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
    
// 		vector<int>ans(2, -1);
// 		for(int i = 0; i<nums.size(); i++){
// 			if(nums[i]==target){
// 				ans[0] = i;
// 				   break;          
// 			}
// 		}
// 		for(int i = nums.size()-1; i>=0; i--){
// 			if(nums[i]==target){
// 				ans[1] = i;
// 				 break;
// 			}
// 		}
// 		return ans;
        //
        
//     }
// };


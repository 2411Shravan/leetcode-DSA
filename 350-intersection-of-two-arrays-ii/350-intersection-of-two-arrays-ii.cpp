class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int x1=nums1.size();
        int x2=nums2.size();
        int x=0,y=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ret_ans;
        while(x<x1 && y<x2){
            if(nums1[x]==nums2[y]){
                ret_ans.push_back(nums1[x]);
                x++;
                y++;
            }
            else if(nums1[x]>nums2[y]){
                y++;
            }
            else{
                x++;
            }
        }
        
        
        return ret_ans;
    }
};
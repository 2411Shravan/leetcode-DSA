class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int tot=m+n-1;
        int p1=m-1;
        int p2=n-1;
        while(p2>=0){
            if(p1>=0 && nums1[p1]>nums2[p2]){
                nums1[tot]=nums1[p1];
                p1--;
                tot--;
            }
            else{
                nums1[tot]=nums2[p2];
                p2--;
                tot--;
            }
        }
    }
};
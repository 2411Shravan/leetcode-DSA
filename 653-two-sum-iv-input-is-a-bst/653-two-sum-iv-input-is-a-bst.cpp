/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rem;
    void getVectorFromBst(TreeNode *root){
        if(!root){
            return;
        }
        rem.push_back(root->val);
        getVectorFromBst(root->left);   
        getVectorFromBst(root->right);   
    }
    
    
    bool findTarget(TreeNode* root, int k) {
       getVectorFromBst(root);
        sort(rem.begin(),rem.end());
        int low=0;
        int high=rem.size()-1;
        while(low<high){
            int sum=rem[low]+rem[high];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                low++;
            }
            else if(sum>k){
                high--;
            }
        }
        return false;
    }
};
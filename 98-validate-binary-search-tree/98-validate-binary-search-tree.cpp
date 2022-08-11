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
    void getVector(TreeNode* root,vector<int>& res){
        if(root==NULL){
            return;
        }
        getVector(root->left,res);
        res.push_back(root->val);
        getVector(root->right,res);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> res;
        getVector(root, res);
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>=res[i+1]){
                return false;
            }
        }
        return true;
    }
};
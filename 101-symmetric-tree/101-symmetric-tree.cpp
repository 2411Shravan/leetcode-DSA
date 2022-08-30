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
    bool funcIsSymmetric(TreeNode* rt1,TreeNode* rt2){
        if(rt1==NULL && rt2==NULL){
            return true;
        }
        if((rt1==NULL && rt2!=NULL) ||(rt1!=NULL && rt2==NULL)){
            return false;
        }
        if(rt1->val!=rt2->val){
            return false;
        }
        
        int leftTreeVal=funcIsSymmetric(rt1->left,rt2->right);
        int rightTreeVal=funcIsSymmetric(rt1->right,rt2->left);
        
        return leftTreeVal&&rightTreeVal;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return funcIsSymmetric(root->left,root->right);
    }
};
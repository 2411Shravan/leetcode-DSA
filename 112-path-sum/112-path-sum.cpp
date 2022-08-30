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
    void solHasPathSum(TreeNode* root, const int currentSum, const int targetSum, bool& containsSolution){
        if(containsSolution){
           return ; 
        }
        if(root->left==nullptr && root->right==nullptr){
            if(currentSum+root->val==targetSum){
                containsSolution= true;
                return;
            }
        }
        
        if(root->left!=nullptr){
            solHasPathSum(root->left,currentSum+root->val,targetSum,containsSolution);
        }
        if(root->right!=nullptr){
            solHasPathSum(root->right,currentSum+root->val,targetSum,containsSolution);
        }
       
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return false;
        bool containsSolution= false;
        solHasPathSum(root,0,targetSum,containsSolution);
        return containsSolution;
    }
};
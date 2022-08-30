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
    int maxDepthOfTree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int left=maxDepthOfTree(root->left);
        int right=maxDepthOfTree(root->right);
        return left>right?left+1:right+1;
    }
    int maxDepth(TreeNode* root) {
        int res=maxDepthOfTree(root);
        return res;
    }
};
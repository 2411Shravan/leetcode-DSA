/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* findSolutionForLowestCommonAncestor(TreeNode* &root,TreeNode* &p,TreeNode* &q){
        while(root!=NULL){
            if(p->val>root->val && q->val>root->val){
                root=root->right;
            }
            else if(p->val<root->val && q->val<root->val){
                root=root->left;
            }
            else{
                return root;
            }
        }
        return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* result=findSolutionForLowestCommonAncestor(root,p,q);
        return result;
    }
};
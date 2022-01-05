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
    
    
    
 
   

  


    
    
    void appendlevelorder(TreeNode* root,vector<vector<int>>&r,int level){
        if(!root){
            return;
        }
        if(level>=r.size()){
            return;
        }
        r[level].push_back(root->val);
            appendlevelorder(root->left,r,level+1);
            appendlevelorder(root->right,r,level+1);
           
        
       
       
    }
    
    
    int height(TreeNode* root){
        int l,r;
        if(root==NULL){
            return 0;
        }
        else {
             l=height(root->left);
             r=height(root->right);
        }
        
        return (l>r)?l+1:r+1;
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> r;
        for(int k=0;k<height(root);k++){
            vector<int> res;
            r.push_back(res);
        }
        
        appendlevelorder(root,r,0);
        return r;
    }
};
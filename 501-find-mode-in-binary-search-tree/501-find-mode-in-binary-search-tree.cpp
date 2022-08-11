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
    unordered_map<int,int> um;
    vector<pair<int,int>> up;
    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        return a.second > b.second;
    }
    void putToMap(TreeNode* root){
        if(root==NULL){
            return;
        }
        putToMap(root->left);
        um[root->val]++;
        putToMap(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> pos;
        putToMap(root);
        int freq=INT_MIN;
        for(auto it:um){
            freq=max(freq,it.second);
        }
        
        for(auto it:um){
            if(it.second==freq){
                pos.push_back(it.first);
            }
        }
        return pos;
    }
};